#include <iostream>

int main()
{
  unsigned int N(100);
  unsigned int sumsquare(0);
  unsigned int sum(0);
  for(unsigned int i=1;i<N+1;++i)
  {
    sumsquare+=i*i;
    sum+=i;
  }
  sum*=sum;
  sum-=sumsquare;
  std::cout<<"difference = "<<sum<<std::endl;
  return 0;
}
