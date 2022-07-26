#include "mainwindow.h"
#include "camerasetting.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    CameraSetting cs;
    cs.show();
    return a.exec();
}
