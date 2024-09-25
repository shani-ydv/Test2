//access specifier
//without inheritance private and protected are same
#include<iostream>
using namespace std;
class collage
{
	private:
		int sid,eid;
		string sname,ename;
		static string c_name;
		static int estd_year;
	public:
	void s_set()
	{
		cin>>sid;
		cin>>sname;
		}
		void e_set()
		{
			cin>>eid;
			cin>>ename;
			}	
			void s_get()
			{
				cout<<sid;
				cout<<sname;
			}
			void e_get()
			{
				cout<<"Employee id = "<<eid<<endl;
				cout<<"Employe name = "<<ename<<endl;
				cout<<"Collage name= "<<c_name<<endl;
				cout<<"Established year = "<<estd_year<<endl;
			}
	
	
};
string collage::c_name = "MPGI";
int collage::estd_year=1999;
int main()
{
	collage obj;
	obj.s_set();
	obj.e_set();
	obj.s_get();
	obj.e_get();
}








