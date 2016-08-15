#include <cmath>
#include <iostream>

inline unsigned int gcd(unsigned int a,unsigned int b)
{
  return b==0?a:gcd(b,a%b);
}

int main()
{
  constexpr unsigned int N(50);
  unsigned int numTriangles(0);
  for(unsigned int i=1;i<N;++i)
    for(unsigned int j=1;j<(N+1);++j)
    {
      // slope of the edge (0,0)--(i,j)
      const auto d((i>j)?gcd(i,j):gcd(j,i));
      // number of right traingles with edge pependicular to (0,0)--(i,j) and which live in square (N-i,0)--(N,0)--(N,j)--(N-i,j)
      numTriangles+=std::min((j*d)/i,((N-i)*d)/j);
    }
  // symmetrize
  numTriangles*=2;
  // add numebr of triangles with right angle in the origin or on the edge of the square
  numTriangles+=3*std::pow(N,2);
  std::cout<<"Number rectangular triangles = "<<numTriangles<<std::endl;
}
