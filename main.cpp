#include <QApplication>
#include "my_dialog.h"

// C++11
void f() noexcept 
{
  std::cout << "Hello world\n";
}

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  my_dialog d;
  d.show();
  return a.exec();
}
