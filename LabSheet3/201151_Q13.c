
//201151

//Q13

#include<stdio.h>
int main(){
	int low =0,high =100 ,count =0,number;
	char True,large;
	while(True !='Y'){
		number =(low+high)/2;
		printf("number = %d\n",number); 
		count++;
		printf("Is that the number you think(Y/N) : "); //ask about number is equel to the number user thought
		scanf("%s",&True);
		if(True == 'Y')//if the answer is Y in first round,so that break the loop here
			break;

		else {
			printf("Is the number you think larger than this number(Y/N) : "); //ask about the number that user think is larger or smaller than number from user  
			scanf("%s",&large);
			number =(low+high)/2;
			if(large == 'Y'){
				low = number ; //chage the low value as the number 
			}
			else {
				high = number; //change the high value as the number
			}
			
		}
	}printf("\nGuess the number %d times until became truth value.",count);
}
