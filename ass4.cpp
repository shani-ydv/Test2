#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d,e;
   int avg=0;
   cout<<"Enter temperature of 5 cities"<<endl;
   cin>>a>>b>>c>>d>>e;
   avg = (a+b+c+d+e)/5;
   cout<<"Average temperature = "<<avg;
}
