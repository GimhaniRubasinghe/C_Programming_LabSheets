
//201151

//Q3

#include<stdio.h>

//Programm to calculate the surface of the cube and volume of the cube 

int area_and_volume(int x) // declare a function to calculate surface of the cube and volume of the cube
{
	printf("Surface area of the cube : %d\n",6*x*x);
	printf("Volume of the cube : %d\n",x*x*x);
}


int main()
{
	int length;
	printf("Enter the length of side of the cube  : "); // to get length of size of cube
	scanf("%d", &length);
	area_and_volume(length); //call the define function
	
}
