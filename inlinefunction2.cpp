#include<iostream>//in every class all the methods all inline by default
using namespace std;
class shani{
	public:
		inline void fun()
{
	cout<<"This is fun function"<<endl;
    
}
};
int main()
{
	shani obj;
	obj.fun();
	return 0;
}

