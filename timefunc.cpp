#include<iostream>
using namespace std;

void time(int seconds);

int main()
{
  int seconds,hours,sec,min;
  cout<<"enter number of time in seconds \n";
  cin>>seconds;
  time(seconds);
  cout<<" seconds="<<hours<<" Hour(s)= "<<min<<" Minute(s)= "<<sec<<" Second(s)";
return 0;
}

void time(int* seconds, int* hours, int* )
    {
      int hours;
      int min;
      int sec;

      
      hours=seconds%360;
      min=hours%60;
      sec=min%60;



    }
