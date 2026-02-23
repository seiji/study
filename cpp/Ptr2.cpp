#include <iostream>

int main()
{
  char a;
  char* p;

  p = &a;
  std::cout << (size_t)p << std::endl;
  std::cout << (size_t)&a << std::endl;
}
