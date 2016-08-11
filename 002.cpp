#include <iostream>

int main()
{
  unsigned int a0(1);
  unsigned int a1(2);
  unsigned int N(4000000);
  unsigned int sum(0);
  while(a1<N)
  {
    if(a1%2==0)
      sum+=a1;
    unsigned int temp(a1);
    a1+=a0;
    a0=temp;
  }
  std::cout<<"sum = "<<sum<<std::endl;
  return 0;
}
