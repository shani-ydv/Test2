#include<iostream>
using namespace std;
class calculation{
	
		public:
			void add(int num1,int num2)
			{
				cout<<"Addition of two numbers : "<<num1+num2<<endl;
			}
			void sub(int num1,int num2)
			{
				cout<<"Subtraction of two numbers : "<<num1-num2<<endl;
			}
			void mul(int num1,int num2)
			{
				cout<<"Multiplication of two numbers : "<<num1*num2<<endl;
			}
			void div(int num1,int num2)
			{
				cout<<"Division of two numbers : "<<num1/num2<<endl;
			}

};
int main()
{
	calculation obj;
	obj.add(10,5);
	obj.sub(10,5);
	obj.mul(10,5);
	obj.div(10,5);
}






