
//201151

//Q10

#include<stdio.h>
#include<string.h>

//program to add 'ing' at the end of a given string (length should be at least 3). If the given string already ends with 'ing' then add 'ly' instead. 

int main()
{
	int count =0,i;
	char word[50]; //because now length of world largest verd is 45 
	printf("Enter a string : ");
	scanf("%s",&word);
	
	while(word[count] !='\0'){ //to get length of word
		count++;
	}
	if(count <3){
		printf("String length is not enough.(string should more than 3)");//to egnore string which length is less than 3
	}
	else if((word[count-1] == 'g') && (word[count-2] == 'n') && (word[count-3] == 'i')){ //to add 'ly' to the which has ing end of the word
		strcat(word,"ly");

		}
	else{
		strcat(word,"ing"); //to add ing to the remaining words
	}
	printf("resault : %s",word);
}
