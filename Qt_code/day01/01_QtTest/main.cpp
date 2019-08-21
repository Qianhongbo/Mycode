#include "_QtTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	_QtTest w;
	w.show();
	return a.exec();
}