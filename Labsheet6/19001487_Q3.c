
//19001487

//Q3

#include <stdio.h>
// a program to find the maximum number between two numbers using a pointer

int main(){
	int a,b;
	int *p1,*p2;//declare two pointer variables
	
	p1 = &a;//store address of a in p1 pointer variable
	p2 = &b;//store address of b in p2 pointer varible
	
	printf("Enter two numbers: ");
	scanf("%d %d",p1,p2);
	
	printf("Max number between %d and %d is: %d",*p1,*p2,*p1>*p2? *p1:*p2);//print max number
	
}
