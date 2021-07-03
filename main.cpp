#include "cryptocypher.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CryptoCypher w;
    w.show();
    return a.exec();
}
