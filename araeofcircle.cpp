// WAP to find area of circle. Area of Circle = PI * r * r Where, PI = 3.14 
#include<iostream>
#define PI 3.14
using namespace std;
class Area{
	private:
		int radius;
		public:
			void area()
			{
				cout<<" Enter Radius of circle"<<endl;
				cin>>radius;
				cout<<"Area of Circle = "<<PI*radius*radius<<endl;
			}
		
};
int main()
{
	Area obj;
	obj.area();
	return 0;
	
}
