/*Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First 
function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second 
function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered 
through keyboard*/
#include<iostream>
using namespace std;
class Area{
	private:
		int length,breadth,area;
		public:
			void setDim()
			{
				cout<<"Enter length and breadth of rectangle"<<endl;
				cin>>length;
				cin>>breadth;
			}
			
			void getArea()
			{
				area = length*breadth;
				cout<<"Area = "<<area;
			}
	
	
};

int main()
{
	Area obj;
	obj.setDim();
	obj.getArea();
	return 0;
}




