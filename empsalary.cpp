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
	for(int i=1;i<=5;i++)
	{
	cout<<"Salary of "<<i<< " Employee"<<endl;
	obj[i].set();
	obj[i].netsalary();
	}
	
}
