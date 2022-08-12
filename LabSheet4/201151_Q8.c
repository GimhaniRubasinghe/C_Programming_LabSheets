
//201151

//Q8

#include<stdio.h>

//Programm to find GCD of two integers

int GCD(int x,int y)
{
	int i,gcd;
	for(i=1; i <= x && i <= y; i++)//declare a function to find gcd of two integers
    {
        if(x%i==0 && y%i==0)// Checks if i is factor of both integers
            gcd = i;
    }

	return gcd ;		
}

int main()
{
	int a, b ;

    printf("Enter two integers: "); //to get two integer from user
    scanf("%d %d", &a, &b);
	printf("\nGCD(%d,%d) = %d ",a,b,GCD(a,b));
}



