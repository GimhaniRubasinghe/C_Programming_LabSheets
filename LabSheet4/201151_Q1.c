
//201151

//Q1

#include<stdio.h>

//Programm to add two numbers

int addition(int x,int y) // declare a function to add two numbers
{
	printf("%d + %d = %d ",x,y,x+y);	
}

int main()
{
	int x ,y ;
	
	printf("Enter number two numbers : "); //to get two numbers as a user input
	scanf("%d %d",&x,&y);
	
	addition(x,y); 	
}
