#include<iostream>
using namespace std;
class logic
{
	private:
		int a;
		static int b;
		public:
		static void sm()
		{
			cout<<"Static Method"<<endl;
			b=20;
			cout<<"Static data : "<<b<<endl;
		}
	   void nsm()
	   {
	   	cout<<"Non static method"<<endl;
	   	a = 10;
	   	b = 200;
	   	cout<<"Non static data : "<<a<<endl;
	   	cout<<"Static data : "<<b<<endl;
	   }
	
};
int logic::b;

int main()
{
	logic::sm();
	logic obj;
	obj.nsm();
		
}



