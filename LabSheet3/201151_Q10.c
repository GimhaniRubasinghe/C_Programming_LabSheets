
//201151

//Q10

#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year : "); // to get year from user 
	scanf("%4d",&year);
	if (year%100 == 0){ //if year is devided by 100,it must be devided by 400 to be a leap year
		if(year%400 == 0){ 
			printf("%4d is a leap year",year);
		}
		else{
			printf("%4d is not a leap year",year);
		}
	}
	else{
		if(year%4==0){ //if year is not devided by 100,it should only be devided by 4 to be a leap year
			printf("%4d is a leap year",year);
		}
		else{
			printf("%4d is not a leap year",year);
		}
	}	
}
