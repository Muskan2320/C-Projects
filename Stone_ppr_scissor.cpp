#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	string player_name;
	cout<<"Enter your name: ";
	cin>>player_name;
	system("cls");
	
	int rounds;
	cout<<player_name<<" How many rounds you want to play? : ";
	cin>>rounds;
	
	int player_score=0, computer_score=0;
	for(int round=1; round<=rounds; round++)
	{
		system("cls");
		int player_choice=0, computer_choice;
		cout<<"Round: "<<round<<"/"<<rounds<<endl;
		cout<<player_name<<"'s Score: "<<player_score<<endl;
		cout<<"Computer Score: "<<computer_score<<endl;
		cout<<"1. Rock"<<endl;
		cout<<"2. Paper"<<endl;
		cout<<"3. Scissor"<<endl;
		
		while(player_choice!=1 && player_choice!=2 && player_choice!=3)
		{
			cout<<"Enter your choice: ";
			cin>>player_choice;	
		}
		
		srand(time(0));
		computer_choice = (rand()%3)+1;
		
		if(player_choice==1 && computer_choice==3)
		{
			cout<<"PLayer win"<<endl;
			player_score++;
		}
		else if(player_choice==2 && computer_choice==1)
		{
			cout<<"Player win"<<endl;
			player_score++;
		}
		else if(player_choice==3 && computer_choice==2)
		{
			cout<<"Player win"<<endl;
			player_score++;
		}
		else if(player_choice == computer_choice)
		{
			cout<<"Draw"<<endl;
		}
		else
		{
			cout<<"Computer win"<<endl;
			computer_score++;
		}
		
		cout<<"Press any key to continue...."<<endl;
		getch();
		
	}
	
	cout<<endl;
	if (computer_score == player_score)
	{
		cout<<"----GAME IS DRAWN----" <<endl;
	}
	else if(player_score>computer_score)
	{
		cout<<"----"<<player_name<<" WON THE GAME----"<<endl;
	}
	else
	{
		cout<<"----COMPUTER WON THE GAME----"<<endl;
	}
	
	return 0;
}

