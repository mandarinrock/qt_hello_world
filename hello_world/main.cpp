// Simple Run
//#include <QApplication>

//int main(int argc, char **argv)
//{
// QApplication app (argc, argv);
// return app.exec();
//}

// Simple Hello World text box
//#include <QApplication>
//#include <QPushButton>

//int main(int argc, char **argv)
//{
// QApplication app (argc, argv);

// QPushButton button ("Hello world !");
// button.show();

// return app.exec();
//}

#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QPushButton button;
 button.setText("My text");
 button.setToolTip("A tooltip");
 button.show();

 return app.exec();
}
