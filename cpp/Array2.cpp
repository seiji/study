#include <iostream>

int main()
{
  int a;
  int &r = a;

  a = 0;
  std::cout << a << std::endl;
  std::cout << r << std::endl;

  r = 5;

  std::cout << a << std::endl;
  std::cout << r << std::endl;

}
