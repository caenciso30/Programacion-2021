
#include <cmath>
#include <iostream>

// definition
double fun(double x);
template <typename fptr>
double trapezoid(double a, double b, double h, fptr f);
template <typename fptr>
double simpson(double a, double b, double h, fptr f);


// main
int main(int argc, char **argv)
{
    std::cout.precision(9); std::cout.setf(std::ios::scientific);
    const double XMIN = std::atof(argv[1]);
    const double XMAX = std::atof(argv[2]);
    const double h = std::atof(argv[3]);
    const int N1 = 10;
    const int N2 = 1000;
    const double exact = std::sqrt((sin(XMAX)*2-8*cos(XMAX))*(1.6));
std::cout<< trapezoid(XMIN, XMAX, h, fun) <<"\t"
	      << simpson(XMIN, XMAX, h, fun) <<"\t"
	      << exact <<"\n";
 std::cout<< N1 <<"\t"<<std::fabs(((trapezoid(XMIN, XMAX, h, fun)-exact)/exact)*100)<<"\t" << std::fabs(((simpson(XMIN,XMAX,h,fun)-exact)/exact)*100)<<"\n";
 std::cout<< N2 <<"\t"<<std::fabs(((trapezoid(XMIN, XMAX,h, fun)-exact)/exact)*100)<<"\t" << std::fabs(((simpson(XMIN, XMAX, h, fun)-exact)/exact)*100)<<"\n";
    	        
    return 0;
}

// implementation

double fun(double x)
{
    return std::sin(x)*2*x;
}

template <typename fptr>
double trapezoid(double a, double b, double h, fptr f)
{
  const int n =((b-a)/h);
  double resultTrap = 0.0;
  double DeltaTrap1 = 0.0;
  for(int ii = 1; ii <= n-1; ++ii) {
    double xi = a + ii*h; 
    resultTrap += f(xi);
  }
  resultTrap += 0.5*(f(a) + f(b));
  resultTrap *= h;
  double rapidezTrap = sqrt((1.6)*resultTrap);

  return rapidezTrap;
}
template <typename fptr>
double simpson(double a, double b, double h, fptr f)
{
  const int n = ((b-a)/h);
  double resultSimp = 0.0;
  for(int ii = 1; ii <= n-1; ++ii){
    double xi = a + ii*h;
    resultSimp += f(xi);
  }
  resultSimp += (1/3)*(f(a)+4*(f((a+b)/2))+f(b));
  resultSimp *= h;
  double rapidezSimp = sqrt((1.6)*resultSimp);

  return rapidezSimp;
}




  
