#include "forcamainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    int x = 10;

    QApplication a(argc, argv);
    ForcaMainWindow JANELA;
    JANELA.show();

    return a.exec();
}
