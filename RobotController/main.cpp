#include "robotcontroller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RobotController w;
    w.show();

    return a.exec();
}
