
//201151

//Q1

#include<stdio.h>

//to create a multiplication table storing the values in a 2D array and then print the table.

int main()
{
	int i ,j,num[10][10];
	printf("\n \t\t************* MULTIPLICATION TABLE *************\n\n \t");
	for(i=0;i<10;i++){
		printf("%d\t",i+1);	
	}
	printf("\n \t");
	for(i=0;i<10;i++){
		printf("~\t");	
	}
	printf("\n\n");	

	for(i=0;i<10;i++){ //to print the multiplication values
		printf(" %d >\t",i+1);
		for(j=0;j<10;j++){
			num[i][j] = (i+1)*(j+1);
			printf("%d\t",num[i][j]);
		}
		printf("\n \t___________________________________________________________________________\n\n");
	}	
}
