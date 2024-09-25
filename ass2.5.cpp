#include<iostream>
using namespace std;
class shani{
	private:
		int x,y,z;
		public:
			void triangle(){
			
			cout<<"Enter three sides of triangle"<<endl;
	         cin>>x>>y>>z;
	         if((x+y+z)==180)
	         {
	         	cout<<"It is triangle "<<endl;
			 }
	      else
	      {
	      	cout<<"IT is not triangle"<<endl;
		  }
	}
};
int main()
{
	shani obj;
	obj.triangle();
}
