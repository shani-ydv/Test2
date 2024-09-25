#include<iostream>
using namespace std;
inline int SQUARE(int);
int main()
{
	cout<<64/SQUARE(4)<<endl;
	return 0;
	
}
inline int SQUARE(int x)
{
	return x*x;
}
