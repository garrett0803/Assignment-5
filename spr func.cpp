#include <iostream>
using namespace std;
double acalc(int arad, int ahgt);
double vcalc(int prad, int phgt);
int main()
{
  double rad,hgt;
  float a,v;

  cout<<"Enter radius and height in (inches) \n";
  cin>>rad>>hgt;
 a= acalc(rad,hgt);
 v= vcalc(rad,hgt);
  cout<<"Can Surface area = "<<a<<" square inches \n";
  cout<<"Can Volume = "<<v<<" cubic inches";

  return 0;

}

double acalc(int arad, int ahgt)
  {
  return ((2*(3.14))*(arad*ahgt))+((2*3.14)*(arad*arad));

  }
double vcalc(int prad, int phgt )
	{
	return (3.14)*(prad*prad)*(phgt);
	
	}
