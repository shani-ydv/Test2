#include<iostream>
using namespace std;
class area{
	public:
		area(float l,float b)
		{
			float a=l;
			float c=b;
			cout<<"Area of rectangle = "<<a*c<<endl;		
		}
	
};
int main()
{
	area obj(5,10);
}
