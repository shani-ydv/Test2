#include<iostream>
using namespace std;
class shani{
	
      private:
		int x;
		int y;
		int z;
		public:
		void set();
		void process();
		void print();
};
	int x;
		int y;
		int z;
void shani::set()
		{
			cout<<"Enter two number"<<endl;
			cin>>x;
			cin>>y;
		}
		void shani::process(){
			z=x+y;
		}
		void shani::print()
		{
			cout<<"Sum = "<<z<<endl;
		}
	int main()
	{
		shani obj;
	    obj.set();
		obj.process();
		obj.print();
	}
