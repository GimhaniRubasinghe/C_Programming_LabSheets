
//19001487

//Q9

#include<stdio.h>
#include<string.h>

//a program to increasing employees salary usinh hours

struct Employee{
	char name[70];
	int Salary;
	int hours;
};

int main(){
	int i;
	struct Employee emp[10];
	for(i=0;i<10;i++){
		printf("\n*****Employee %d details*****\n",i+1);
		printf("Name : ");
		scanf("%s",&emp[i].name);
		printf("Salary : ");
		scanf("%d",&emp[i].Salary);
		printf("Hours of work per day : ");
		scanf("%d",&emp[i].hours);
		
	}
	printf("\n*****Final salary details of employees*****\n");
	for(i=0;i<10;i++){
		if(emp[i].hours==8){
			emp[i].Salary+=(500*30);
		}
		else if(emp[i].hours==10){
			emp[i].Salary+=(1000*30);
		}
		else if(emp[i].hours==12){
			emp[i].Salary+=(1500*30);
		}
		printf("Name : %s\tFinal salary : %d\n",emp[i].name,emp[i].Salary);
	}
	
}

