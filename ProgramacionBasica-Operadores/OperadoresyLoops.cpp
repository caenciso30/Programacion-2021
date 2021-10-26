#include <iostream>
int main()
{
  long int N = 60, i , resto;
  for(i = 1; i < N; i = i + 1)
    {
      resto = N%i;
      if (resto==0)
	{
	  std::cout << i  << std::endl;
	  
	}
    }


  return 0;
}
  

  

  
      

      
   
	
 

