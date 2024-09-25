//local class
#include<iostream>
using namespace std;
void collage()
{
	class logic{
		public:
			void fun(){
				cout<<"This is fun function"<<endl;
			}
	};
	cout<<"Collage Function"<<endl;
	logic obj;
	obj.fun();
}
int main()
{
	collage();
}
