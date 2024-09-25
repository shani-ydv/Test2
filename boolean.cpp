#include<iostream>
using namespace std;
int main()
{
   extern int a;
   int b;
   int c=10;
   cout<<&b<<endl;
   c=20;
   cout<<c<<endl;
}

