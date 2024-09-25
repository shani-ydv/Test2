#include<iostream>
using namespace std;
class A{
	public:
		void logic()
		{
			cout<<"Logic"<<endl;
		}
		A(int x , int y)
		{
		  int a=x;
		  int b=y;
			cout<<"Sum = "<<a+b<<endl;
		}
	
	

};
int main()
{
	A obj(10,20);
	obj.logic();
	
}
