#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"This is non parametarized constructor"<<endl;
			
		}
		A(int x, int y)
		{
		    cout<<"This is parametarized conctructor"<<endl;	
		}
	
};
int main()
{
	A obj(10,20);
	A obj1;
	A obj2(30,40);
	
}
