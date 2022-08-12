
//201151

//Q5

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//Gamming programm called Rock Paper Scissor
	int random , user_input;
	printf("ROCK PAPER SCISSOR\n");
	printf("CHOOSE ONE FROM FOLLOWING CHOICE\n ROCK =1\n PAPER=2\n SCISSORS=3\nRules: ROCK breaks SCISSORS, SCISSORS cut PAPER, PAPER covers ROCK.\n");
	while(1){
		srand(time(NULL)); 
		random = rand()%3+1; // to get random selection from computer
		printf("Enter the number of your choice : "); //to get the choice from user
		scanf("%d",&user_input);
		
		
		if ((user_input != 1) && (user_input != 2) && (user_input != 3)){ // to exit the game
			break;
		}
		printf("Your choice = %d\tComputer choice = %d\n\n",user_input,random);
		
		
		//to display the result
		if(user_input == random){
			printf("\tMatch was tie\n\n");
		}
		else{
			if((user_input == 1) &&(random == 3)){
				printf("\tCongratulations!\n\t You Won.\n\n");
			}
			else if((user_input == 2) &&(random == 1)){
				printf("\tCongratulations!\n\t You Won.\n\n");
			}
			else if((user_input == 3) &&(random == 2)){
				printf("\tCongratulations!\n\t You Won.\n\n");
			}
			else{
				printf("\tYou lost\n\tTry again\n\n");
			}
		}
		
		
		
		printf("If you want to exit from game type any number except game keys.\n\n");
	}
}
