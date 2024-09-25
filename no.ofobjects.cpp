#include<iostream>
using namespace std;
class objects{
	private:
		int static count;
		
		private:
			logic()
			{
				count++;
			}
	     static void ct()
	     {
	     	cout<<"no. of objects: "<<count<<endl;
		 }
};
int objects::count=0;
int main()
{
	objects obj,obj1,obj2,obj3;
	
}
