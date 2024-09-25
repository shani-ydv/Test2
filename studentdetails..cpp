// Write a C++ program to create a class for student to get and print details of a student. Following are the details of a student:
// Studid, name ,sem, branch
#include<iostream>
using namespace std;
class Student{
	private:
		int studid,sem;
		string name,branch;
		public:
			void getstudentdetails()
			{
				cout<<"Enter Student Id"<<endl;
				cin>>studid;
				cout<<"Enter name"<<endl;
				fflush(stdin);
				getline(cin,name);
				cout<<"Enter Semester"<<endl;
				cin>>sem;
				cout<<"Enter Branch"<<endl;
				fflush(stdin);
				getline(cin,branch);
			}
			void printstudentsdetails()
			{
				cout<<studid<<endl;
				cout<<name<<endl;
				cout<<sem<<endl;
				cout<<branch<<endl;
				
			}
	
};
int main()
{
	Student obj;
	obj.getstudentdetails();
	obj.printstudentsdetails();
	
}
