#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "resultdialog.h"
#include "ciph.hpp"
#include <QIcon>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>
#include <openssl/rand.h>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

std::string get_password() {
    const int KEY_LENGTH = 32;
    std::vector<unsigned char> key(KEY_LENGTH);
    if (RAND_bytes(key.data(), key.size()) != 1) return "Error";
    std::stringstream ss;
    for (auto b : key) ss << std::hex << std::setw(2) << std::setfill('0') << (int)b;
    return ss.str();
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Gratis)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/gratis.ico"));
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->size());

    ui->Input->setPlaceholderText("Enter your password");
    ui->stackedWidget->setCurrentIndex(0);

    // Initial text for your label
    ui->currentFilePath->setText("File not selected");
}

MainWindow::~MainWindow() {
    delete ui;
}

// 1. Create a new file
void MainWindow::on_createFileButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    "Create new list", "", "Text Files (*.txt)");
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            file.close();

            // Store path in the variable
            this->currentFilePath = fileName;
            // Update UI label
            ui->currentFilePath->setText(fileName);

            QDesktopServices::openUrl(QUrl::fromLocalFile(fileName));
        } else {
            QMessageBox::warning(this, "Error", "Failed to create file");
        }
    }
}

// 2. Select an existing file
void MainWindow::on_selectFileButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    "Select file", "", "Text Files (*.txt)");
    if (!fileName.isEmpty()) {
        // Store path in the variable
        this->currentFilePath = fileName;
        // Update UI label
        ui->currentFilePath->setText(fileName);

        QDesktopServices::openUrl(QUrl::fromLocalFile(fileName));
    }
}

void MainWindow::on_encryptButton_clicked()
{
    if (this->currentFilePath.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select or create a file first!");
        return;
    }

    std::string pwd = ui->Input->text().toStdString();

    try {
        QFile file(this->currentFilePath);
        if (!file.open(QIODevice::ReadOnly)) return;
        QByteArray content = file.readAll();
        file.close();

        if (content.startsWith("[SECURED]")) {
            QMessageBox::warning(this, "Warning", "File is already encrypted!");
            return;
        }

        ModernSecureCipher cipher(pwd);
        std::string encryptedHex = cipher.encrypt(content.toStdString());

        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) return;
        file.write("[SECURED]");
        file.write(encryptedHex.c_str());
        file.close();

        QMessageBox::information(this, "Success", "File encrypted successfully!");
        QDesktopServices::openUrl(QUrl::fromLocalFile(this->currentFilePath));
    } catch (const std::exception& e) {
        QMessageBox::critical(this, "Error", e.what());
    }
}

void MainWindow::on_decryptButton_clicked()
{
    if (this->currentFilePath.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select a file first!");
        return;
    }

    std::string pwd = ui->Input->text().toStdString();

    try {
        QFile file(this->currentFilePath);
        if (!file.open(QIODevice::ReadOnly)) return;
        QByteArray content = file.readAll();
        file.close();

        if (!content.startsWith("[SECURED]")) {
            QMessageBox::critical(this, "Error", "File is not encrypted!");
            return;
        }

        std::string hexData = content.mid(9).toStdString();

        ModernSecureCipher cipher(pwd);
        std::string decryptedText = cipher.decrypt(hexData);

        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) return;
        file.write(decryptedText.c_str());
        file.close();

        QMessageBox::information(this, "Success", "File decrypted successfully!");
        QDesktopServices::openUrl(QUrl::fromLocalFile(this->currentFilePath));
    } catch (const std::exception& e) {
        QMessageBox::critical(this, "Error", "Invalid password or corrupted file!");
    }
}

void MainWindow::on_OKButton_clicked()
{
    if (ui->Input->text().length() >= 1) {
        ui->stackedWidget->setCurrentIndex(1);
    } else {
        qDebug() << "Input field is empty.";
    }
}

void MainWindow::on_pushButton_clicked()
{
    std::string pass = get_password();
    ResultDialog diag(this);
    diag.setWindowIcon(this->windowIcon());
    diag.setPassText(QString::fromStdString(pass));
    diag.exec();
}

void MainWindow::on_Input_returnPressed() { on_OKButton_clicked(); }
void MainWindow::on_backButton_clicked() { ui->stackedWidget->setCurrentIndex(0); }
void MainWindow::on_backButton2_clicked() { ui->stackedWidget->setCurrentIndex(0); }
void MainWindow::on_backButton3_clicked() { ui->stackedWidget->setCurrentIndex(0); }

void MainWindow::on_Input_textChanged(const QString &text)
{
    qDebug() << "User typing:" << text;
}
