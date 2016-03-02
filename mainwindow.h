#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QString>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
private slots:
    void handleButton1();
    void handleButton2();
private:
    QPushButton *m_button;
    QPushButton *SaveSVG;
    QLineEdit *entryBox;
    QString test;

};

#endif // MAINWINDOW_H
