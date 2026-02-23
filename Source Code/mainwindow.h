#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Gratis; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_Input_textChanged(const QString &text);
    void on_Input_returnPressed();
    void on_backButton_clicked();
    void on_backButton2_clicked();
    void on_backButton3_clicked();
    void on_OKButton_clicked();
    void on_createFileButton_clicked();
    void on_selectFileButton_clicked();
    void on_encryptButton_clicked();
    void on_decryptButton_clicked();

private:
    Ui::Gratis *ui;
    QString m_userPassword;
    QString currentFilePath;
};
#endif
