#include<iostream>
using namespace std;
class Student{
	private:
		int stdid;
		string name;
		int m1,m2,m3,m4,m5;
		float percentage;
		public:
		void get()
		{
			cout<<"Enter student id"<<endl;
			cin>>stdid;
			cout<<"Enter Name"<<endl;
			cin>>name;
			cout<<"Enter marks of 5 subject"<<endl;
			cin>>m1>>m2>>m3>>m4>>m5;
			percentage = (m1+m2+m3+m4+m5)/5;
		}
	    void show()
	    {
	    	cout<<"Student id :"<<stdid<<endl;
	    		cout<<"Student name : "<<name<<endl;
	    			cout<<"Percentage : "<<percentage<<endl;
	    
		}

};
int main()
{
	Student obj[3];
	obj[0].get();
	obj[1].get();
	obj[2].get();
	obj[0].show();
	obj[1].show();
	obj[2].show();
	
	
}
