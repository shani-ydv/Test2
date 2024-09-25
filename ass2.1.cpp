//prgm to print name age city and pincode using class
#include<iostream>
using namespace std;
class details{
	public:
		void personal_details()
		{
			cout<<"Name - SHANI YADAV"<<endl;
			cout<<"Age-21"<<endl;
			cout<<"City - Unnao"<<endl;
			cout<<"Pincode-209864"<<endl;
		}
	
	
	
};
int main()
{
	details obj;
	obj.personal_details();
	return 0;
	
	
}
