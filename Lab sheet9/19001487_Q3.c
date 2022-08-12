
//19001487

//Q3

#include <stdio.h>
#include<stdlib.h>
struct household{
	int id;
	int a_income;
	int mem;
};

int main(){
	FILE* fp;
	struct household HH[5];
	int i,x[5],Average,Median_p;
	char a[100],sr;
	
	fp = fopen("readme.txt","r");//open file read/write mode
	sr = fscanf(fp,"%[^\n]%s",&a);
	
    for(i=0;i<5;i++){
    	fscanf(fp,"%d %d %d %d",&HH[i].id,&HH[i].a_income,&HH[i].mem,&x[i]);
	}
	
	printf("ID number\tAnnual Income\tNo of members\n");
	for(i=0;i<5;i++){
		printf("  %d\t\t  %d\t\t  %d\n",HH[i].id,HH[i].a_income,HH[i].mem);
	}
	Average = (HH[0].a_income+HH[1].a_income+HH[2].a_income+HH[3].a_income+HH[4].a_income)/5;//calculate average
	printf("\nAverage household income($) - %d\n",Average);
	printf("Total number of members in the town - %d\n",x[4]);
	Median_p = x[4]/2;//calculate median point
	for(i=0;i<5;i++){
		if(x[i]>=Median_p){
			printf("Median Annual Income ($) - %d\n",HH[i].a_income);//print median
			break;
		}
	}
	
	fclose(fp);
	
}
