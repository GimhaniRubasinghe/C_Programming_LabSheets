
//201151

//Q12

#include<stdio.h>

//program to reverse a string using stack.

int main()
{
	int top , length , i;
	char str1[length] , str2[length] ;
	
	printf("Enter the string : ");
	scanf("%s",&str1);
	
	while(str1[length] != '\0'){ //to get length of stack
		length++;
	}
	
	for(top = length-1;top>=0;top--){ //to get reverse order of string
		str2[i] = str1[top];
		i++;
	}
	printf("String in reverse order : %s",str2);
}
