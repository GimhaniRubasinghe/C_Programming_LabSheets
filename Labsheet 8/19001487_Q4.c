//19001487
 
//Q4
#include<stdio.h>
//a program to add, subtract and multiply two complex numbers using struct to function.

struct complex{
	int x;
	int y; 
}; 

int main(){
	struct complex z1,z2;
	printf("Enter the real part of Z1 : ");
	scanf("%d",&z1.x);
	printf("Enter the virtual part of Z1 : ");
	scanf("%d",&z1.y);
	printf("Enter the real part of Z2 : ");
	scanf("%d",&z2.x);
	printf("Enter the virtual part of Z2 : ");
	scanf("%d",&z2.y);
	
	printf("Z1 = %d + i%d\n",z1.x,z1.y);
	printf("Z2 = %d + i%d\n",z2.x,z2.y);
	
	//add z1 and z2
	printf("Z1 + Z2 = %d + i%d\n",z1.x+z2.x,z1.y+z2.y);
	
	//substract z1 and z2
	printf("Z1 - Z2 = %d + i%d\n",z1.x-z2.x,z1.y-z2.y);
	
	//multiply Z1 and Z2
	printf("Z1*Z2 = %d + i%d\n",z1.x*z2.x - z1.y*z2.y,z1.x*z2.y + z1.y*z2.x );
}
