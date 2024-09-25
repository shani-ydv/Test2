#include<iostream>
using namespace std;
int main()
{
  float prc,rate,time;
  float si;
  cout<<"Enter principle , rate and time"<<endl;
  cin>>prc>>rate>>time;
  si=(prc*rate*time)/100;
  cout<<"SI = "<<si;
}
