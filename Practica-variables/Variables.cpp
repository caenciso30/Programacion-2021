#include <iostream>
int main()
{
  float a;
  bool b=false;
  double x=2.34;
  float y=1.0e40;
  std::cout <<"a=" << a <<"\n";
  std::cout <<"b=" << b <<"\n";
  std::cout <<"Direccion de x=" << &x <<"\n";
  std::cout <<"Tamaño de x=" << sizeof(x) <<"\n";
  std::cout <<"y=" << y <<"\n";
  return 0;
}
// Supongo que inf significa infinito. El programa lo imprime asi porque es un numero muy grande el cual no puede imprimir como se pone en la variable.
