#include<iostream>
using namespace std;
void fun(int,int,int=7);
int main(){
	
	fun(3,4);
//	fun(4,5,6);
//	fun(7,8);
	return 0;
}
void fun(int x,int y,int z){
	cout<<x<<" "<<y<<" "<<z<<" "<<endl;
}

