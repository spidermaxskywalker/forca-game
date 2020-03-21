#include "forcamainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ForcaMainWindow w;
    w.show();

    return a.exec();
}
