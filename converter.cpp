#include<iostream>
using namespace std;
class shani{
	private:
		int h,m,s,seconds;
		public:
		void convert()
		{
			cout<<"Enter time in hh:mm:ss: this format"<<endl;
			cin>>h>>m>>s;
			h=h*3600;
			m=m*60;
			seconds = h+m+s;
			cout<<"Seconds = "<<seconds<<endl;
		}
	
	
	
};
int main()
{
	shani obj;
	obj.convert();
	
}
