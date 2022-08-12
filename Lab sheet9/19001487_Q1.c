
//19001487

//Q1
#include<stdio.h>
#include<stdlib.h>

struct student{
	char reg[20];
	char name[50];
	int age;
};
int main()
{
	FILE* fp;
	fp = fopen("student.txt","w");//open file for read
	struct student std[5];//declare a array to store the read values
	if(fp == NULL){
		printf("Cannot open\n");//chaeck the file pointer
		exit(0);
	}
	
	int i;
	printf("press enter");
	for(i=0;i<5;i++){//get details from user
		
		gets(std[i].reg);
		printf("\nEnter a reg no : ");
		gets(std[i].reg);
		printf("Enter the student name : ");
		gets(std[i].name);
		printf("Enter the age : ");
		scanf("%d",&std[i].age);
	}
		
	fprintf(fp,"StRe_no\t\tSt_Name\t\tSt_age\n");//print to the file
	for(i=0;i<5;i++){
		fprintf(fp,"%s\t%s\t\t%d\n",std[i].reg,std[i].name,std[i].age);
	}
		
	fclose(fp);
	
	
}
