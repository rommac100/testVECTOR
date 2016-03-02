#include "mainwindow.h"

#include <QCoreApplication>
#include <QString>
#include <QDebug>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QString test;
    // Create the button, make "this" the parent
    QTextStream cout(stdout);
    m_button = new QPushButton("My Button", this);
    SaveSVG = new QPushButton("saveSVG", this);
    entryBox = new QLineEdit("test", this);
    // set size and location of the button
    m_button->setGeometry(QRect(QPoint(100, 100),
    QSize(200, 50)));
    SaveSVG->setGeometry(QRect(QPoint (500, 100), QSize(200, 50)));
    entryBox->setGeometry(QRect(QPoint (300, 200), QSize(200, 50)));

    // Connect button signal to appropriate slot
    connect(m_button, SIGNAL (released()), this, SLOT (handleButton1()));
    connect(SaveSVG, SIGNAL (released()), this, SLOT (handleButton2()));
}

void MainWindow::handleButton1()
{
    // change the text
    m_button->setText("Example");
    // resize button
    m_button->resize(100,100);
    entryBox->setText(test);
}

void MainWindow::handleButton2()
{
    test = entryBox->displayText();
    entryBox->setText("derp");
}
