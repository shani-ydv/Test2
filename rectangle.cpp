#include<iostream>
using namespace std;
class Area{

		
		public:
			void rect_area(int length, int breadth)
			{
				cout<<"Area of rectangle : "<<length*breadth<<endl;
			}
	
};
int main()
{
	int length,breadth;
	Area obj;
	cin>>length>>breadth;
	obj.rect_area(length,breadth);
	
	
	
}
