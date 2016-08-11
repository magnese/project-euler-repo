#include <iostream>

int main()
{
  unsigned int sum(0);
  unsigned int N(1000);
  for(unsigned int i=0;i<N;++i)
    if(i%3==0||i%5==0)
      sum+=i;
  std::cout<<"sum = "<<sum<<std::endl;
  return 0;
}
