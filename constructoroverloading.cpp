#include<iostream>//When we make more than one constructor in a program it is knownn as contructor overloading
using namespace std;
class A{
	public:
		A()
		{
			cout<<"This is non parametarized constructor"<<endl;
			
		}
		A(int x)
		{
			cout<<"This is one parametarized constructor"<<endl;
		}
		A(int x, int y)
		{
		    cout<<"This is parametarized conctructor"<<endl;	
		}
	
};
int main()
{
	A obj;
	A obj1(10);
	A obj2(30,40);
	
}
