#ifndef SEARCHVEHICLE_H
#define SEARCHVEHICLE_H

#include <QWidget>

namespace Ui {
class searchVehicle;
}

class searchVehicle : public QWidget
{
    Q_OBJECT

public:
    explicit searchVehicle(QWidget *parent = nullptr);
    ~searchVehicle();

private:
    Ui::searchVehicle *ui;
};

#endif // SEARCHVEHICLE_H
