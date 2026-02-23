#include "resultdialog.h"
#include "ui_resultdialog.h"
#include <QClipboard>

ResultDialog::ResultDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::ResultDialog)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->size());

    this->setWindowTitle("Result");
}

ResultDialog::~ResultDialog() {
    delete ui;
}

void ResultDialog::setPassText(QString text) {
    ui->resultLabel->setText(text);
}

void ResultDialog::on_copyButton_clicked() {
    QClipboard *clipboard = QGuiApplication::clipboard();
    clipboard->setText(ui->resultLabel->text());
    accept();
}
