#include<iostream> 
using namespace std;
int main()
{
   int user,comp,turn,apple=21;
   cout<<"Welcome to the Apple Game"<<endl;
   cout<<"Total number of apples "<<apple<<endl;
   cout<<"Maximum choice is 4"<<endl;
   
   while(1)
   {
   	if(turn==0)
	   {
	    cout<<"User turn"<<endl;
   	cin>>user;
   	 if(user>4)
   	 cout<<"It is against the rule"<<endl;
   	 else{
		
   	apple = apple - user;
   	cout<<"Remaining apple = "<<apple<<endl;
   	  turn=1;
   }
   }
   	if(turn==1)
	   {
	   	comp = 5-user;
	cout<<"Computer turn "<<comp<<endl;
	
	
   	apple = apple - comp ;
   	cout<<"Remaining apple = "<<apple<<endl;
   	 turn=0;
   }
   if(apple==1)
   break;
   
}
if(apple==1 && turn==0)
   {
   	cout<<"User looses"<<endl;
   	cout<<"Computer Won the game"<<endl;
   }
}
   
	
	

