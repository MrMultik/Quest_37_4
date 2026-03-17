#include "tvremote.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TVRemote w;
    w.show();
    return a.exec();
}
