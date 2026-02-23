#include <iostream>

int main()
{
  char array[10];
  std::cout << (size_t)array << std::endl;
  int i;
  for (i = 0; i < 10; ++i) {
    std::cout << (size_t)&array[i] << std::endl;
  }
}
