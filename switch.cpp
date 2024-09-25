#include<iostream>
using namespace std;
int findPower(int a,int b);
int main(){
	int a,b;
	
	cin>>a>>b;
 int result = findPower(a,b);
 cout<<"Answer is "<<result<<endl;
}
findPower(int a, int b)
{
	int ans=1;
	for(int i =1;i<=b;i++){
		ans = ans * a;
	}
	return ans;
}
