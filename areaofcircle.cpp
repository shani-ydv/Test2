#include<iostream>
#include<cmath>
using namespace std;
float distance(float x1,float y1,float x2,float y2)
{
	return sqrt(pow(x2-x1,2) + pow(y2-y1,2));	
}

float area_circle(float diameter)
{
	float radius = diameter/2;
	return M_PI * pow(radius,2);
}

int main()
{
	float x1,y1,x2,y2;
	cout<<"Enter coordinates of first point"<<endl;
	cin>>x1>>y1;
	cout<<"Enter coordinates of second point"<<endl;;
	cin>>x2>>y2;
	float diameter = distance(x1, y1, x2, y2);
	float area = area_circle(diameter);
	cout<<"The area of the circle is: "<<area<<endl;
}
