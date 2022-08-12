
//201151

//Q6

#include<stdio.h>

//Programm to find a nCr value when n and r is given

int nCr(n,r) // declare a fuctoin to calculate nCr value
{
	if (r == 0){
		return 1; // nC0 = 1
	}
	if(n == r){
		return 1; //nCn = 1
	}
	 
	return nCr(n-1 ,r) + nCr(n-1,r-1); //recursive call of the function
}

int main()
{
	int n,r;
	printf("n = "); // to get n by user
	scanf("%d",&n);
	
	printf("r = "); // to get r by the user
	scanf("%d",&r);
	
	int result;
	result = nCr(n,r);
	
	printf("\n%dC%d = %d ",n,r,result); // display the result
}
