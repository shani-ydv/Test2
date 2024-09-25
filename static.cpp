#include<iostream>
using namespace std;
class logic
{
	public:
		static void sm()
		{
			cout<<"Static Method"<<endl;
		}
		void nsm()
		{
			cout<<"Non Static method"<<endl;
		}
};
int main()
{
	logic obj;
	obj.nsm();
	logic::sm();
	
	
	
}
