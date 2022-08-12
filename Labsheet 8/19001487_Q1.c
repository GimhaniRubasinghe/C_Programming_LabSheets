
//19001487

//Q1

#include<stdio.h>
#include<string.h>

//a program to store and print the student ID number, name, age, address and marks of 5 students using struct.

struct student{
	char id[5], name[70];
	int age;
	char address[100];
	int marks;
};

int main(){
	struct student std[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n*****Student %d details*****\n",i+1);
		gets(std[i].name);
		printf("Name : ");
		gets(std[i].name);
		printf("Address : ");
		gets(std[i].address);
		printf("id : ");
		gets(std[i].id);
		printf("Age : ");
		scanf("%d",&std[i].age);
		printf("Marks : ");
		scanf("%d",&std[i].marks);		
	}
	//print details
	printf("******Students details*****\n");
	for(i=0;i<5;i++){
		printf("\n*****Student %d details*****\n",i+1);
		printf("Name : %s\t",std[i].name);
		printf("Address : %s\t",std[i].address);
		printf("NIC : %s\t",std[i].id);
		printf("Age : %d\t",std[i].age);
		printf("Marks : %d\n",std[i].marks);	
	}
}
