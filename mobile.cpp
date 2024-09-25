#include<iostream>
using namespace std;
class mobile{
      public:
      	void brand(string b)
      	{
      		cout<<"Brand of mobile is : "<<b<<endl;
		  }
		  void price(int p)
		  {
		  	cout<<"Price of mobile is : "<<p<<endl;
		  }
		  void color(string c)
		  {
		  	cout<<"Color of moile is : "<<c<<endl;
		  }
		  void width(int w)
		  {
		  	cout<<"Width of mobile is : "<<w<<endl;
		  }
		  void height(int h)
		  {
		  	cout<<"Height of mobile  : "<<h<<endl;
		  }
};
int main()
{
	mobile obj;

	obj.brand("apple");
	obj.color("White");
	obj.height(100);
	obj.price(10000);
	obj.width(50);
	
	
	
}
