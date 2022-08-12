
//201151

//Q4

#include<stdio.h>
int main()// PrintNumberInWord
{
	int number;
	printf("Enter the number : "); // to get the number from user
	scanf("%d",&number);
	if (number==1) // to print numbers 1 to 9 in word
		printf("ONE");
	else if(number==2)
		printf("TWO");
	else if(number==3)
		printf("THREE");
	else if(number==4)
		printf("FOUR");
	else if(number==5)
		printf("FIVE");
	else if(number==6)
		printf("SIX");
	else if(number==7)
		printf("SEVEN");
	else if(number==8)
		printf("EIGHT");
	else if(number==9)
		printf("NINE");
	else{
		printf("OTHER"); // if the number greater than 9,print 'other'.
	}	
	
}
