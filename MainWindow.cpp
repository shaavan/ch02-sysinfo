#include <QHBoxLayout>
#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "SysInfo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , mCpuWidget(this)
{
    ui->setupUi(this);
    ui->centralwidget->setLayout(new QHBoxLayout());
    ui->centralwidget->layout()->addWidget(&mCpuWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

