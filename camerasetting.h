#ifndef CAMERASETTING_H
#define CAMERASETTING_H

#include <QWidget>

namespace Ui {
class CameraSetting;
}

class CameraSetting : public QWidget
{
    Q_OBJECT

public:
    explicit CameraSetting(QWidget *parent = nullptr);
    ~CameraSetting();

private:
    Ui::CameraSetting *ui;
    static unsigned int rowcount;
};

#endif // CAMERASETTING_H
