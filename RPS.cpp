#include<iostream>

#include<cstdlib>

#include<ctime>

using namespace std;

int main(){
	srand(time(NULL));//to make the player2 to choose different values at runtime
	
	int player1=0;
	int player2=0;
	
	cout<<"ROCK,PAPER,SCISSORS GAME"<<endl;
	cout<<"1) ROCK"<<endl;
	cout<<"2) PAPER"<<endl;
	cout<<"3) SCISSORS"<<endl;
	
	cin>>player1;
	
	if(player1==1){
		cout<<"Player1 choose Rock"<<endl;
	}
	else if(player1==2){
		cout<<"Player1 choose Paper"<<endl;
	}
	else{
		cout<<"Player1 chooses Scissors"<<endl;
	}
	
	player2=rand()%3+1;//takes values between 1 and 3 (inclusive)
	
	if(player2==1){
		cout<<"player2 choose Rock"<<endl;
	}
	else if(player2==2){
		cout<<"player2 choose Paper"<<endl;
	}
	else{
		cout<<"player2 chooses Scissors"<<endl;
	}
	
	//to declare who wins and who loses
	if(player1==player2){
		cout<<"Tie"<<endl;
	}
	
	//if player1 chooses rock, player2 can either choose paper or scissors
	else if(player1==1){
		if(player2==2){
			cout<<"Player2 wins and Player1 loses"<<endl;
		}
		if(player2==3){
			cout<<"Player2 loses and Player1 wins"<<endl;
		}
	}
	
	//if player1 chooses paper, player2 can either choose rock or scissors 
	else if(player1==2){
		if(player2==1){
			cout<<"Player2 loses and Player1 wins"<<endl;
		}
		if(player2==3){
			cout<<"Player2 wins and Player1 loses"<<endl;
		}
	}
	
	//if player1 chooses scissors, player2 can either choose rock or paper
	else if(player1==3){
		if(player2==1){
			cout<<"Player2 wins and Player1 loses"<<endl;
		}
		if(player2==2){
			cout<<"Player2 loses and Player1 wins"<<endl;
		}
	}
	
	return 0;
}
