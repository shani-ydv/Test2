//#include<iostream> //using string
//using namespace std;
//class mpec{
//	string s;
//	public:
//		void printname()
//		{
//			cout<<"Enter Your Name"<<endl;
//	         getline(cin,s);
//			  cout<<s;
//		}
//};
//int main()
//{
//	mpec obj;
//	obj.printname();
//}
#include<iostream>           // using character array
using namespace std;
class mpec{
	char name[100];
	public:
		void printname()
		{
			cout<<"Enter Your Name"<<endl;
	        gets(name);
	        cout<<name;
			  
		}
};
int main()
{
	mpec obj;
	obj.printname();
}
