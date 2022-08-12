
//19001487

//Q7

#include <stdio.h>
//a programto swap elements using call by reference.

void swap(int *a,int *b){//define swap fuction
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int main(){
	int x,y;
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);	
	swap(&x,&y); //call the function
	printf("After swap : x = %d,y = %d",x,y);		
}
