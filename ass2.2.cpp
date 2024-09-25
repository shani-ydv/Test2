#include<iostream>
#include<cmath>
using namespace std;
class number{
	private:
		float x;
		public:
			void absolute()
			{
				cout<<"Enter any number";
      			cin>>x;
				cout<<abs(x);
			}
	
};
int main()
{
	number obj;
	obj.absolute();
}
