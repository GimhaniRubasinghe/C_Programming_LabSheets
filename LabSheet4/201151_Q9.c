
//201151

//Q9

#include<stdio.h>

//Programm to find sum of 2nd power of all integers between given range 

int PowerOfRange(int x,int y) //declare a function to sum the 2nd power of all integers between given range
{
	int i,result = 0;
	for (i=x;i<=y;i++){
		result+= i*i;	
	}
	return result;		
}


int main()
{
	int a,b;
	printf("Enter the first value of range : "); //to get the start value of the range 
	scanf("%d",&a);
	printf("Enter the last value of range : ");//to get the end value of the range 
	scanf("%d",&b);
	
	printf("\nSum of 2nd power between %d and %d = %d",a,b,PowerOfRange(a,b)); 
}
