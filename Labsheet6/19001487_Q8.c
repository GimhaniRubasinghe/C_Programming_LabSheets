
//19001487

//Q8

#include <stdio.h>
// a program in C to find the factorial of a given number using pointers.

int factorial(int p){//function to calculate factorial value
	if(p <2){
		return 1;
	}
	return p *factorial(p-1);
}
int main (){
	int x,*p;
	p = &x;//store x in pointer variable
	printf("Enter the value : ");
	scanf("%d",p);
	printf("%d! = %d\n",*p,factorial(*p));//call the fuction and print
}
