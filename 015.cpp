#include <iostream>

// num_paths = (cols+rows)!/(cols!rows!)
// TODO: size 20 is too big to compute in this way!
// result is 40*39*37*35*33*31*29*23

int main()
{
  const long long unsigned int cols(3);
  const long long unsigned int rows(3);
  long long unsigned int num_paths(1);
  for(long long unsigned int i=rows+1;i<(rows+cols+1);++i)
    num_paths*=i;
  for(long long unsigned int i=2;i<(cols+1);++i)
    num_paths/=i;
  std::cout<<"num paths = "<<num_paths<<std::endl;
  return 0;
}
