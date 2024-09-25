#include<iostream>
using namespace std;
class shani{
	private:
		int x;
		int y;
		int z;
		public:
		void set()
		{
			cout<<"Enter two number"<<endl;
			cin>>x;
			cin>>y;
		}
		void process(){
			z=x+y;
		}
		void print()
		{
			cout<<"Sum = "<<z<<endl;
		}
	
};
int main()
{
	shani obj;
	obj.set();
	obj.process();
	obj.print();
	
}
