#include<iostream>
using namespace std;
int main()
{
	int right_number=25,guessed_number,guess_limit=5,i;
	cout<<"************Welcome to the Guess Game*************"<<endl;
	cout<<"Please Guess the Number"<<endl;
	cin>>guessed_number;
	
		
		
	
	while(guessed_number!=right_number)
	{
	
	if(guessed_number==right_number)
	{
		break;
	}
	else
	{
		cout<<"You Entered wrong number Please guess again"<<endl;
		cin>>guessed_number;		
	}
}


cout<<"Congratulations You Win!"<<endl;
}
