#include <iostream>

int Abs(int a)
{
  if (a < 0) {
    return -a;
  } else {
    return a;
  }
}

double Abs(double a)
{
  if (a < 0) {
    return -a;
  } else {
    return a;
  }
}

int main()
{
  int i;
  i = 10;
  double d;
  d = 0.5;

  std::cout << Abs(i) << std::endl;
  std::cout << Abs(d) << std::endl;
}
