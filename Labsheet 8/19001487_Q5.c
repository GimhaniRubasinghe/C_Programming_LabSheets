
//19001487

//Q5

#include<stdio.h>
#include<string.h>
#define n 11
//a program to store the ID number, name, age (Between 11 to 14) and address of students (more than 10) and store their information.

struct student{
	char name[70];
	int id ,age;
	char address[100];
};
int i;
struct student std[n];
void printage14(){//a)a function to print the names of all the students having age 14
	for(i=0;i<n;i++){
		if(std[i].age == 14){
			printf("Name : %s\n",std[i].name);
		}
	}
}
void evenid(){//b)a function to print the names of all the students having even ID number
	for(i=0;i<n;i++){
		if((std[i].id%10)%2 == 0){
			printf("Name : %s\n",std[i].name);
		}
	}
}
void details(){//c)a function to display the details of the student whose ID number is given
	int val;
	printf("Enter the id number of student you want to search : ");
	scanf("%d",&val);
	for(i=0;i<n;i++){
		if(std[i].id == val){
			printf("ID : %d\n",std[i].id);
			printf("Name : %s\n",std[i].name);
			printf("Address : %s\n",std[i].address);
			printf("Age : %d\n",std[i].age);
		}
	}
}

int main(){
	for(i=0;i<n;i++){
		printf("\n*****Student %d details*****\n",i+1);
		gets(std[i].name);
		printf("Name : ");
		gets(std[i].name);
		printf("Address : ");
		gets(std[i].address);
		printf("ID : ");
		scanf("%d",&std[i].id);
		printf("Age : ");
		scanf("%d",&std[i].age);
		if (std[i].age>14 || std[i].age<11 ){
			printf("Age should be between 11 and 14");
			break;
		}
	}
	printf("\nNames of students who having age 14 : \n");
	printage14();
	printf("\nNames of students who having even id number : \n");
	evenid();
	details();
}


