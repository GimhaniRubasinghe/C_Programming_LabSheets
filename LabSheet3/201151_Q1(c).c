
//201151

//Q1(c)

#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<6;i++){ // to print pattern through 6 lines
		printf("*");
		for(j=0;j<4;j++){
			if((i==0)||(j==i-1)||(i==5)) //to choose points that astic(*) should print
				printf("*");	
			else{
				printf(" "); //to ignore the places where astic(*) should not print
			}	
		}
		printf("*\n");
	}
		
}
