#include<iostream>
using namespace std;
class calculation{
		public:
			calculation(int x,int y)
			{
				cout<<"Addition = "<<x+y<<endl;
				cout<<"Subtraction = "<<x-y<<endl;
				cout<<"Multiplication= "<<x*y<<endl;
				cout<<"Division = "<<x/y<<endl;

			}

};
int main()
{
	calculation obj(10,5);
}
			     
