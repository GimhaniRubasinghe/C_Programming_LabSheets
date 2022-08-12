
//201151

//Q8

#include<stdio.h>
int main()
{
	int number,i;
	printf("Enter the number : "); // to get number by user
	scanf("%d",&number);
	for(i=1;i<=number;i++){ // to repeat check until number divide by itself
		if(number%i == 0){ //to check whethere number is devided by i
			printf("%d is divisible by %d\n",number,i);
		}	
	}
}
