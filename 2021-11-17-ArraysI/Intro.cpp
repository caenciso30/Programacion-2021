// calcular el producto punto de vectores 2x2
#include <iostream>

int main(int argc, char **argv)
{
  //double x1 = 9.87, y1 = 0.65;
  //double x2 = -5.432, y2 = -0.453;
  // std::cout << x1*x2+y1*y2 << std::endl;
  // primitive arrays
  int N = 10;
  double v1[N], v2[N];
  double dotproduct = 0;
  for(int ii = 1; ii < N; ++ii){
    dotproduct += v1[ii]*v2[ii];
  }
  std::cout << dotproduct << std::endl;
  return 0;

}
