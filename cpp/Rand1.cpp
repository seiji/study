#include <iostream>
#include <cstdlib>
#include <ctime>


void InitRand()
{
  srand((unsigned int)time(NULL));
}

int Dice()
{
  return rand() % 6 + 1;
}

int main()
{
  InitRand();
  int i;
  for (i = 0; i < 20; ++i) {
    std::cout << Dice() << ' ';
  }
  std::cout << std::endl;
}
