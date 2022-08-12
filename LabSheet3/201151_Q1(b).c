
//201151

//Q1(b)

#include<stdio.h>
int main()
{
	int i,j;
	for (i=0;i<6;i++){ // to print patterns through 6 lines
		for(j=5-i;j>0;j--){ 
			printf(" "); 
		}
		for(j=0;j<i+1;j++){
			printf("*");
		}
		printf("\n");
	}
}
