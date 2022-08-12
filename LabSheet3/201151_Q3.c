
//201151

//Q3

#include<stdio.h>
int main()
{
	int number;
	
	printf("Enter a number : "); // get number from user 
	scanf("%d",&number);
	
	if (number%2 == 0){ //number devided by 2 is a even number otherwise is odd
		printf("%d is a even number",number);
	}
	else{
		printf("%d is a odd number",number);
	}
	
}
