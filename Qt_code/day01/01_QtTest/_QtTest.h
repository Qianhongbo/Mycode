#pragma once

#include <QtWidgets/QMainWindow>
#include "ui__QtTest.h"

class _QtTest : public QMainWindow
{
	Q_OBJECT

public:
	_QtTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::_QtTestClass ui;
};
