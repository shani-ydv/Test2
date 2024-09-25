#include<iostream>
using namespace std;
class A{
	public:
		void logic()
		{
			cout<<"Logic"<<endl;
		}
		A()
		{
			cout<<"Constructor"<<endl;
		}
	
	

};
int main()
{
	A obj;
	obj.logic();
	
}
