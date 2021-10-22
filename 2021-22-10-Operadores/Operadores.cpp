#include <iostream>
int main(void)
{
  double x = 9.7, y = -1.87;
  double z = 0;

  z = x+y;
  std::cout << z << std::endl;
  z = x-y;
  std::cout << z << std::endl;
  z= x*y;
  std::cout << z << std::endl;
  z= x/y;
  std::cout << z << std::endl;
  int m = -2.9;
    std::cout << m << std::endl;
    std::cout << 2*3-4/5 << std::endl;
    std::cout << 4%3 << std::endl;
    std::cout << 3%3 << std::endl;
    std::cout << 2%3 << std::endl;
    std::cout << -4%3 << std::endl;

    y = y + 0.9;
    //y += 0.9;
    std::cout << y << std::endl;

    int ii = 3, jj= 0;
    jj= ++ii;
      std::cout << jj << std::endl;
    std::cout << ii << std::endl;
    jj= ii++;
      std::cout << jj << std::endl;
    std::cout << ii << std::endl;
  
    

  
  return 0;

}
  
