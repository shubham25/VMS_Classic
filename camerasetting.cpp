#include "camerasetting.h"
#include "ui_camerasetting.h"
#include <QFile>
#include <QHeaderView>
#include <QTableWidget>

CameraSetting::CameraSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CameraSetting)
{
    ui->setupUi(this);

    // change stylesheet
    QFile stylesheetfile(":/style/SpyBot.qss");
    stylesheetfile.open(QFile::ReadOnly);
    QString stylesheet = QLatin1String(stylesheetfile.readAll());
    this->setStyleSheet(stylesheet);

    // title
    this->setWindowTitle("Camera Settings");

    // set fixed size
    this->setMaximumSize(1000,500);
    this->setMinimumSize(1000,500);

    // Set Table Size
    QHeaderView *head = ui->cameraListTable->horizontalHeader();
    head->setSectionResizeMode(QHeaderView::Stretch);
}


CameraSetting::~CameraSetting()
{
    delete ui;
}
