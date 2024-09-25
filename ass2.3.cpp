#include<iostream>
using namespace std;
class expenses
{
	private:
		int quantity;
		float price,totalexp,discount;
		public:
		void totalexpenses(){
		
		cout<<"Enter quantity"<<endl;
		cin>>quantity;
		cout<<"Enter price of one quantity"<<endl;
		cin>>price;
		totalexp = quantity * price;
		if(totalexp>5000)
		{
			discount = (10*totalexp)/100;
			totalexp = totalexp - discount;
			cout<<"Total expenses are : "<<totalexp<<endl;
		}
		else
		cout<<"Total expenses are "<<totalexp<<endl;
}
};
int main()
{
	expenses obj;
	obj.totalexpenses();
}
