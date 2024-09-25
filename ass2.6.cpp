#include<iostream>
using namespace std;
class shani{
	private:
		int year;
		public:
			void leapyear(){
			cin>>year;
			if((year%4==0 && year%100!=0) || year%400==0 )
			cout<<"leap year";
			else
			cout<<"not a leap year";
		}
};
int main()
{
	shani obj;
	obj.leapyear();
}
