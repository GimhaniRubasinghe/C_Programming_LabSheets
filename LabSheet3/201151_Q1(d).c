
//201151

//Q1(d)

#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<6;i++){ // to print 6 lines
		printf("*");
		if((i==0)|| (i==5)){ // to make squre pattern
			for(j=0;j<8;j++){
				printf("*");
			}
		}
		else{
			for(j=0;j<8;j++){
				printf(" ");
			}
		}
		printf("*\n");
	}
}
