#include<iostream>
using namespace std;
int main()
{
	int right_number=25,guessed_number;
	cout<<"Welcome to the Guess Game"<<endl;
	cout<<"Please Guess the Number"<<endl;
	cin>>guessed_number;
	while(guessed_number!=right_number)
	{
	
	if(guessed_number==right_number)
	{
		cout<<"Congratulations You Won"<<endl;
	}
	else
	{
		cout<<"You Entered wrong number Please guess again"<<endl;
		cin>>guessed_number;
	}
}
}
