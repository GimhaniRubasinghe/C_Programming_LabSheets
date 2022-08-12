
//201151

//Q5

#include<stdio.h>
int main()
{
	float X1,X2,Y1,Y2,result;
	
	printf("Enter X1 : "); //to get X1 from user
	scanf("%f",&X1);
	printf("Enter X2 : "); //to get X2 from user
	scanf("%f",&X2);
	printf("Enter Y1 : "); //to get Y1 from user
	scanf("%f",&Y1);
	printf("Enter Y2 : "); //to get Y2 from user
	scanf("%f",&Y2);
	
	if (X1==X2){ // because denominator should not be null value
		printf("Slope is undefined");
	}
	else{
		result = (Y1-Y2)/(X1-X2);
		printf("Slope of line is tan(-1)%.4f",result);//because slope of value is equal to tan inverse of result
	}
	
}
