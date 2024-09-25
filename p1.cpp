#include<iostream>
using namespace std;
class shani
{ 
    private:
    	int x,y;
    public:
	   void set(){
		cin>>x>>y;	
	}
	shani* modify()
	{
		int x=20;
		x=this->x+2;
		this->y=this->y+x;
		cout<<x<<" "<<this->x<<endl;
		return this;
	}
	void get(){
		cout<<"X = "<<x<<endl;
		cout<<"Y = "<<y<<endl;
	}
		
};
int main(){
	shani obj1;
	shani *ptr;
	obj1.set();
	ptr =obj1.modify();
	ptr->get();
	return 0;
}
