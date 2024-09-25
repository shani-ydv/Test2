/* C++ program to create a class for Employee to get and display following Employee information:
Empcode, Basicsalary
Write Member function to calculate Net salary
DA=174% of Basic salary
HRA=10% of Basic salary
TA=500
Income tax=5 % of basic salary , if baic salary > 50000
Income tax=0 , if Basic salary <= 50000
Netsalary=(basic salary + da + hra + ta) – income tax*/
#include<iostream>
using namespace std;
class employee{
	private:
		 int empcode,basicsalary;
		 double DA,HRA,TA,IT,Netsalary;
	public:
	 	void set(){
	 		cout<<"Enter Employee code"<<endl;
	 		cin>>empcode;
		 	cout<<"Enter basic salary"<<endl;
		 	cin>>basicsalary;
		}
		void netsalary(){			 	
			DA=(basicsalary*174/100);
		 	HRA=(basicsalary*10/100);
		 	TA = 500;
		 	if(basicsalary>50000){
			 	IT=(basicsalary*5/100);
			}
			else{
				IT=0;
			}
			 	
		 	Netsalary = (basicsalary + DA + HRA + TA)-IT;
		 	cout<<"Basic salary = "<<basicsalary<<endl;;
		 	cout<<"DA = "<<DA<<endl;
			cout<<"HRA = "<<HRA<<endl;
		 	cout<<"TA = "<<TA<<endl;
		 	cout<<"Income tax = "<<IT<<endl;
		 	cout<<"Netsalary =  "<<Netsalary<<endl;
			 	
		}
};
int main()
{
	employee obj[5];
	obj[0].set();
	obj[0].netsalary();
	obj[1].set();
	obj[1].netsalary();
	obj[2].set();
	obj[2].netsalary();
	obj[3].set();
	obj[3].netsalary();
	obj[4].set();
	obj[4].netsalary();
	
}
