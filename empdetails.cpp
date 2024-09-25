#include<iostream>
using namespace std;
class Employee{
	private:
		int empCode,basicSalary;
		string empName;
		public:
			void get()
			{
				cout<<"Enter employee code"<<endl;
				cin>>empCode;
				cout<<"Enter employee name"<<endl;
				cin>>empName;
				cout<<"Enter Basic salary"<<endl;
				cin>>basicSalary;
			}
			void print()
			{
				cout<<"Employee Information"<<endl;
				cout<<"Employee code : "<<empCode<<endl;
				cout<<"Employee Nmae : "<<empName<<endl;
				cout<<"Employee Salary : "<<basicSalary<<endl;			
			}
};
int main()
{
	Employee obj;
	obj.get();
	obj.print();
	
}
