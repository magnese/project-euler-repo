#include <iostream>

int main()
{
  long unsigned int N(600851475143);
  std::cout<<"divisors: "<<std::endl;
  while(N>1)
    for(long unsigned int i=2;i<=N;++i)
      if(N%i==0)
      {
        std::cout<<i<<std::endl;
        N/=i;
        break;
      }
  return 0;
}
