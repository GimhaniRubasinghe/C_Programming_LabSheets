
//201151

//Q7

#include<stdio.h>
int main()
{
	char Char;
	
	printf("Enter the character : "); // to get character from user
	scanf("%c",&Char);
	if ((Char>='A') && (Char<='Z')){ // check whethere character is in range A-Z
		printf("%c is an uppercase alphabetic character",Char);
	}
	else if((Char>='a')&& (Char<='z')){ //check whethere character is in range a-z
		printf("%c is a lowercase alphabetic character",Char);
	}
	else{ 
		printf("%c is not an alphabetic character",Char); 
	}
	
}
