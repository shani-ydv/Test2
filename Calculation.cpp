// WAP to display addition, subtraction, multiplication and division of two integers on screen.
// Declare Class Calculation
// Declare data member num1 and num2 in Private section Write member function for initialize num1 and num2 Write member function for each operation.
#include<iostream>
using namespace std;
class Calculation{
	private:
		int num1,num2,add1,sub1,mul1,div1;
		public:
			void member()
			{
				cout<<"Enter two numbers";
				cin>>num1;
				cin>>num2;
			}
			void add()
			{
				add1=num1+num2;
				cout<<"Addition =  "<<add1<<endl;
			}
			void sub()
			{
				sub1=num1-num2;
				cout<<"Subtraction = "<<sub1<<endl;
			}
			void mul()
			{
				mul1=num1*num2;
				cout<<"Multiplication = "<<mul1<<endl;
			}
			void div()
			{
					div1=num1/num2;
				cout<<"Division= "<<div1<<endl;
			}
};
int main()
{
	Calculation obj;
	obj.member();
	obj.add();
	obj.div();
	obj.mul();
	obj.sub();
}
