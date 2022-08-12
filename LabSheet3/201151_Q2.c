
//201151

//Q2

#include<stdio.h>
int main()
{
	int number;
	printf("Enter the page number : "); // to get page number by user
	scanf("%d",&number);
	if (number%2==0){ // to choose the side
		printf("Page number %d is in left side page",number);
	}	
	else{
		printf("Page number %d is in right side page",number);
	}
}	


