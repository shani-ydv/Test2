#include<iostream>
using namespace std;
class logic{
	private:
		int x ;
		int y ;
		public:
			int z ;
			void input()
			{
				cout<<"Enter two numbers"<<endl;
				cin>>x;
				cin>>y;
			}
			void process()
			{
				z = x+y;
			}
			void output()
			{
				cout<<"Result = "<<z;
			}
};
int main()
{
	logic obj;
	obj.input();
	obj.process();
	obj.output();
	return 0;
}
