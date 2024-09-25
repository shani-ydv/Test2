/*Write a C++ program to demonstrate ATM money withdrawal process by taking following private data members:
Accountno, balance;
The withdrawal function should return remaining balance to the user and should deduct withdrawal amount 
from balance. If withdrawal amount > balance print appropriate message on screen (Not enough balance)
The Deposit function should return updated balance to user.*/
#include<iostream>
using namespace std;
class ATM{
	private:
		 long long int accnum,balance;
		 int remamt,witamt,dep;
		public:
			
			void set()
			{
				cout<<"Enter Account number and Balance"<<endl;
				cin>>accnum>>balance;
			}
			void withdrawl()
			{
				cout<<"Enter the Withdrawl amount"<<endl;
				cin>>witamt;
			if(witamt>balance)
			{
				cout<<"Not Enough Money"<<endl;
			}
			else
			{
					balance = balance - witamt;
					cout<<"Remaining amount = "<<balance<<endl;
						}	
				
					}
					void deposit()
					{
						cout<<"Enter the amount to be deposited"<<endl;
						cin>>dep;
						balance = balance + dep;
						cout<<"Updated Balance =  "<<balance<<endl;
					}
					void bal()
					{
						cout<<"Balance in the Account = "<<balance<<endl;
						
					}
};
int main()
{
	ATM obj;
	obj.set();
	obj.withdrawl();
	obj.deposit();
	obj.bal();
}








