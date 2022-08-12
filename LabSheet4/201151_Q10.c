
//201151

//Q10

#include<stdio.h>

//Programm to find factorial values of 1 to 10

int Factorial(int i){ //declare a function to find factorial value 
	if(i==1){
		return 1;
	}
	return i*Factorial(i-1); //recursive of the function call
}


int main()
{
	int i;
	for (i=1;i<=10;i++){
		printf("Factorial of %d = %d\n",i,Factorial(i)); // To print factorial value of 1 to 10
	} 
}
