/*Write a C++ program to create a class for student to get and print details of a student. Following are the details of
a student:
Student_id, Name, Branch,Sub1_mark,Sub2_mark,Sub3_mark,Sub4_mark,Sub5_mark
Write member function to calculate Percentage, Class (Dist,First,Second,Pass ) of student*/
#include<iostream>
using namespace std;
class student{
	private:
		int Student_id,Sub1_mark,Sub2_mark,Sub3_mark,Sub4_mark,Sub5_mark;
		string branch,name;
		int arr[3];
		public:
			void stddetails()
			{
				cout<<"Enter Student Id of "<<endl;
				cin>>Student_id;
				cout<<"Enetr  Student name"<<endl;
				fflush(stdin);
				getline(cin,name);
				
				cout<<"Enter marks of 5 subject"<<endl;
				cin>>Sub1_mark>>Sub2_mark>>Sub3_mark>>Sub4_mark>>Sub5_mark;
				
			}
			void printdetails()
			{
				cout<<Student_id<<endl;
				cout<<name<<endl;
				cout<<branch<<endl;
				cout<<Sub1_mark<<endl<<Sub2_mark<<endl<<Sub3_mark<<endl<<Sub4_mark<<endl<<Sub5_mark<<endl;
			}
			int percenatge()
			{
				cout<<"Percentage =  "<<(Sub1_mark+Sub2_mark+Sub3_mark+Sub4_mark+Sub5_mark)/5<<endl;
				
				return (Sub1_mark+Sub2_mark+Sub3_mark+Sub4_mark+Sub5_mark)/5;
			}
			
};
int main()
{ 
    int arr[3];
	student obj[3];
	for(int i=0;i<3;i++){
	obj[i].stddetails();
}
for(int i=0;i<3;i++){
	obj[i].printdetails();
}
for(int i=0;i<3;i++){
	
	arr[i] =obj[i].percenatge();
}
int max()
			{
					int max = -1;
                 	for(int i =0;i<3;i++)
	             {
		               if(arr[i]>max)
		              {
		              	max=arr[i];
	                	}
	               }
	               return max;
			}		


	return 0;
}





