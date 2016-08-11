#include <iostream>

// a^2 + b^2 = c^2 and a + b + c = N --> N^2 = -2ab + 2Na +2Nb

const unsigned int N(1000);

template<typename T>
T fun(T a)
{
  return static_cast<T>(N*N-2*a*N)/static_cast<T>(2*N-2*a);
}

int main()
{
  unsigned int a(1);
  unsigned int b;
  for(;a<N;++a)
  {
    double temp(fun<double>(a));
    b=fun<unsigned int>(a);
    if(temp==static_cast<double>(b))
      break;
  }
  unsigned int c(N-a-b);
  std::cout<<" a = "<<a<<"; b = "<<b<<"; c = "<<c<<std::endl;
  std::cout<<"product = "<<a*b*c<<std::endl;
  return 0;
}
