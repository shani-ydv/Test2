#include<iostream>
using namespace std;
class age{
	private:
		int ram,sulabh,ajay;
		public:
			void youngest()
			{
				cout<<"Enter age of Ram"<<endl;
				cin>>ram;
				cout<<"Enter age of sulabh"<<endl;
				cin>>sulabh;
				cout<<"Enter age of ajay"<<endl;
				cin>>ajay;
				if(ram<sulabh)
				{
					if(ram<ajay)
					{
					cout<<"Ram is youngest"<<endl;
								}				
			}
			if(sulabh<ram)
			{
				if(sulabh<ajay)
				cout<<"Sulabh is youngest"<<endl;
			}
}
};
int main()
{
	age obj;
	obj.youngest();

}




