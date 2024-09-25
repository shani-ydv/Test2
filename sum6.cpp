#include<iostream>
using namespace std;
inline int fun();
int main()
{
	int x=fun();
	cout<<x;
}
inline int fun()
{
	cout<<"This is a function"<<endl;
    return 10;
}
