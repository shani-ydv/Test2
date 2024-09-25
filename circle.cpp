#include<iostream>
using namespace std;
class circle{
	
	private:
		char color;
		float radius;
		static int count;
		public:
			circle(char c,float r)
			{
				color=c;
				radius=r;
				count++;
			}
			static void ct()
			{
				cout<<count<<endl;
			}
};
int circle::count=0;
int main()
{
	circle c1('R',1.5),c2('G',2),c3('B',2.5);
	circle::ct();
	
	
}
