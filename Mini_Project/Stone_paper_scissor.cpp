//stone paper scissor
#include<iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()
using namespace std;
//function game
int game(char you,char computer){
	if(you==computer)
	return -1;
	
	//user choice is stone and computer choice is paper
	if(you=='s' &&computer=='p')
	return 0;
	
	//user choice is paper and computer choice is stone
	else if(you=='p' && computer=='s')
	return 1;
	
	//user choice is scissor and computer choice is stone
	else if(you=='z' && computer=='s')
	return 0;
	
	//user choice is stone and computer choice is scissor
	else if(you=='s' && computer=='z')
	return 1;
	
	//user choice is paper and computer choice is scissor
	else if(you=='p' && computer=='z')
	return 0;
	//user choice is scissor and computer choice is paper
	else if(you=='z' && computer=='p')
	return 1;
}

int main(){
	int n;
	char you,computer,result;
	
	srand(time(NULL));
	
	n=rand()%100;
	if(n<33)
	computer='s';
	
	else if(n>33 && n<66)
	computer ='p';
	else 
	computer='z';
	
	cout<<"    Enter s for STONE ,p for PAPER, and z for SCISSOR   ";
	cin>>you;
	result=game(you,computer);
	
	if(result==-1){
		cout<<"Game Draw";
	}
	else if(result==1){
		cout<<"Wow! you have won the game!";
	}
	else
	{
		cout<<"Oh you have lost the game!";
	}
	cout<<" You choose"<<" "<<you<<" "<<"And computer choose"<<" "<<computer;
	return 0;
}

//output:
// Enter s for STONE ,p for PAPER, and z for SCISSOR   z
//Wow! you have won the game! You choose   z And computer choose p
