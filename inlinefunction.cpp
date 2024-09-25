#include<iostream>//inline function is used to reduce execution time by using more space it copies the definition of function and paste it in main 
using namespace std;
inline int fun();
int main()
{
	int x=fun();
	cout<<x;
}
inline int fun()
{
	cout<<"This is fun function"<<endl;
    return 10;
}
