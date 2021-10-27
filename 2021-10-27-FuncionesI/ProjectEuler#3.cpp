#include <iostream>
/*
 N -> long long
 calcular los divisores primos:
 calcular el divisor
 verificar si el divisor es primo 
 */

int main(void)
{
  const long long int N = 600851475143;
  for(long long ii = 2; ii < N; ii++){
    if(N%ii == 0){
      long long int largedivisor = N/ii;
      bool isprime = true;
      for(long long int jj = 2; jj < largedivisor; jj++){
	if(largedivisor%jj == 0){
	  isprime = false;
	break;
      }
    }

    if(isprime){
      std::cout << largedivisor << std::endl;
      break;
    }
    }
  }
  return 0;
}

 

