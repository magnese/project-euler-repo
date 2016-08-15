#include <array>
#include <cmath>
#include <iostream>
#include <tuple>

int main()
{
  constexpr unsigned int N(50);

  // generate coordinates
  std::array<std::pair<unsigned int,unsigned int>,(N+1)*(N+1)> points;
  auto pointIt(points.begin());
  for(unsigned int x=0;x<N+1;++x)
    for(unsigned int y=0;y<N+1;++y)
    {
      pointIt->first=x;
      pointIt->second=y;
      ++pointIt;
    }

  // count traingles
  const double toll(1.e-12);
  unsigned int numTriangles(0);
  for(const auto& a:points)
    for(const auto& b:points)
    {
      const auto& ax(a.first);
      const auto& ay(a.second);
      const auto& bx(b.first);
      const auto& by(b.second);
      const double c2(std::pow((ax>bx)?ax-bx:bx-ax,2)+std::pow((ay>by)?ay-by:by-ay,2));
      const double a2(std::pow(ax,2)+std::pow(ay,2));
      const double b2(std::pow(bx,2)+std::pow(by,2));
      if((a2>toll)&&(b2>toll)&&(c2>toll))
        if((std::abs(c2-a2-b2)<toll)||(std::abs(a2-c2-b2)<toll)||(std::abs(b2-a2-c2)<toll))
          ++numTriangles;
    }
  numTriangles/=2;
  std::cout<<"Number rectangular traingles = "<<numTriangles<<std::endl;
}
