#include <QApplication>
#include <QWidget> //窗口控件基类
#include <QPushButton>

int main(int argc, char ** argv)
{
    QApplication app(argc, argv);

    QWidget w;
    w.setWindowTitle("hi !");


    QPushButton b;
    b.setText("hehe");
    b.setParent(&w);
    b.move(10, 10);

    w.show();

    /* if you don't appoint the parrent obiect, the windows have no relationship.
     * a appoint b as its parent object, then a will be on the top of b.
     * two ways:
     *          1.setParent
     *          2.use the function
     * in this way, we only need to show the parent object
    */

    app.exec();
    return 0;
}
