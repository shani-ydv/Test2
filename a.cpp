#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector <int > sortedarray(	vector <int > a,	vector <int > b)
{
	int n1 = a.size();
	int n2 = b.size();
	int i=0;
	int j=0;
	vector<int> unionArray;
	while(i<n1 && j<n2){
		if(a[i]<=b[i]){
			if(unionArray.size()==0 || 
			unionArray.back()!=a[i])
			{
				unionArray.push_back(a[i]);
			}
			i++;
		}
	   else{
	   	if(unionArray.size()==0 || 
			unionArray.back()!=b[i])
			{
				unionArray.push_back(b[i]);
			}
			j++;
	   }
	   
	}
	while(j<n2){
			if(unionArray.size()==0 || 
			unionArray.back()!=b[i])
			{
				unionArray.push_back(b[i]);
			}
			j++;
	}
	while(i<n1)
	{
			if(unionArray.size()==0 || 
			unionArray.back()!=a[i])
			{
				unionArray.push_back(a[i]);
			}
			i++;
	}
	for(int i =0;i<unionArray.size();i++){
		cout<<unionArray[i]<<endl;
	}
   	
}





int main()
{
	vector <int > a = {1,1,2,3,4,4,5};
	vector <int > b = {1,2,3,4,5,6};
	vector <int > sortedarray(	vector <int > a,	vector <int > b);
	
}
