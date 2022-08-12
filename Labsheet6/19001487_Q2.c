
//19001487

//Q2

#include <stdio.h>
// a program to add numbers using call by reference.

int add(int *a,int *b){
	return *a+*b;
}

int main(){
	int a,b=0,*p1,*p2;
	p1 = &a;
	p2 = &b;
	
	printf("Enter 0 to show result\n");//to stop the adding and display result
	do{
		printf("Enter number : ");
		scanf("%d",p1);
		*p2 = add(&a,&b);//call the add function	
	}while(*p1 != 0);
	printf("Sum of given numbers : %d",*p2);
}
