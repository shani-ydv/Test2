#include<iostream>
using namespace std;
class number{
	private:
		int x;
		public:
			void num()
			{
				cin>>x;
				if(x%2==0)
				{
					cout<<"Number is even";
				}
				else
				{
					cout<<"Number is odd";
				}
				
				
			}
};
int  main()
{
	number obj;
	obj.num();
	
	
	
	
}
