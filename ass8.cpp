#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d,e;
   int pcn=0,total=0;
   cout<<"Enter Marks of 5 stuents"<<endl;
   cin>>a>>b>>c>>d>>e;
   total=a+b+c+d+e;
   pcn= (a+b+c+d+e)/5;
   cout<<"Percentage= "<<pcn<<endl;
   cout<<"Total = "<<total;
}
