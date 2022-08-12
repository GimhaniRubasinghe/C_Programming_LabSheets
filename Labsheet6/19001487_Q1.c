
//19001487

//Q1

#include <stdio.h>

//a program to add two numbers using pointers
int main(){
	int a,b;
	int *p1,*p2;//declare two pointer variables
	
	p1 = &a;//store address of a in p1 pointer variable
	p2 = &b;//store address of b in p2 pointer varible
	
	printf("Enter two numbers: ");
	scanf("%d %d",p1,p2);
	printf("%d + %d = %d\n",*p1,*p2,*p1 + *p2);//add a and b using pointers
}

