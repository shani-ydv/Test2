#include<iostream>
using namespace std;
class mobile{
		private:
			int price;
			string brand,color;
      public:
      	int count;
      	void get()
      	{
      		cout<<"Enter brand of mobile "<<endl;
      		cin>>brand;
      		cout<<"Enter price of mobile"<<endl;
		  	cin>>price;
		  		cout<<"Enter color of mobile"<<endl;
		  	cin>>color;
		  }
    	 
};
int main()
{
	mobile obj[5];
	for(int i =1;i<=5;i++)
	{
		obj[i].get();
	}	
}

