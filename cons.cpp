#include<iostream>
using namespace std;
class A{
	public:
		A(int x , int y)
		{
			int a=x;
		    int	b=y;
			cout<<"A = "<<a<<"B= "<<b<<endl;
			cout<<"This is constructor"<<endl;
		}
		void fun()
		{
			cout<<"This is fun"<<endl;
		}
};
int main()
{
	A obj(10,20);
	obj.fun();
}
