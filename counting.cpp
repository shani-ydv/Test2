#include<iostream>
using namespace std;
int printCount(int num){
	for(int i=1;i<=num;i++){
		cout<<i<<" 1";
	}
	cout<<endl;
}
int main(){
	int num;
	cin>>num;
	printCount(num);
}
