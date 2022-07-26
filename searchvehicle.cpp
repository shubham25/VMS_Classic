#include "searchvehicle.h"
#include "ui_searchvehicle.h"
#include <QFile>

searchVehicle::searchVehicle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::searchVehicle)
{
    ui->setupUi(this);
    this->setMaximumSize(1000,500);
    this->setMinimumSize(1000,500);

    // change stylesheet
    QFile stylesheetfile(":/style/SpyBot.qss");
    stylesheetfile.open(QFile::ReadOnly);
    QString stylesheet = QLatin1String(stylesheetfile.readAll());
    this->setStyleSheet(stylesheet);

    // title
    this->setWindowTitle("Vehicle Database");

}

searchVehicle::~searchVehicle()
{
    delete ui;
}
