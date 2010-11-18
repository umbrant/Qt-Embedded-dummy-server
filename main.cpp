#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv, QApplication::GuiServer);

    return a.exec();
}
