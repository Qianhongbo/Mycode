#include "mainwindow.h"
#include "QAction"
#include <QStatusBar>
#include <QToolBar>
#include <QMenuBar>
#include <QDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Main Window"));

    openAction = new QAction(QIcon(":/"), tr("&Open..."), this);
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an existing file"));
    connect(openAction, &QAction::triggered, this, &MainWindow::open);

    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);

    QToolBar *toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);
}

MainWindow::~MainWindow()
{
}

//void MainWindow::open()
//{
//    QDialog dialog(this);
//    dialog.setWindowTitle(tr("Hello, dialog!"));
//    dialog.show();
//}

void MainWindow::open()
{
    QDialog dialog(this);
    dialog.setWindowTitle(tr("Hello, dialog!"));
    dialog.exec();
    qDebug() << dialog.result();
}

void about(QWidget * parent, const QString & title, const QString & text);

//if (QMessageBox::Yes == QMessageBox::question(this,
//                                              tr("Question"),
//                                              tr("Are you OK?"),
//                                              QMessageBox::Yes | QMessageBox::No,
//                                              QMessageBox::Yes)) {
//    QMessageBox::information(this, tr("Hmmm..."), tr("I'm glad to hear that!"));
//} else {
//    QMessageBox::information(this, tr("Hmmm..."), tr("I'm sorry!"));
//}
