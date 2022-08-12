
//19001487

//Q6

#include<stdio.h>
#include<string.h>
#define n 11
//a program to store the name, account number and balance of customers (more than 10) and store their information.

struct customer{
	char name[70];
	int AC;
	int balance;
};
struct customer cus[n];
int i;

void balanceless200(){//a)a function to print the names of all the customers having balance less than Rs.200.
	for(i=0;i<n;i++){
		if(cus[i].balance<200){
			printf("%s\n",cus[i].name);
		}
	}
	
}

void balanceincrement(){//b) a function to add Rs.100 in the balance of all the customers having more than Rs.1000 in their balance and then print the incremented value of their balance.
	for(i=0;i<n;i++){
		if(cus[i].balance>1000){
			cus[i].balance +=100;
			printf("name : %s\tbalance : %d\n",cus[i].name,cus[i].balance);
		}
	}
}
int main(){
	
	for(i=0;i<n;i++){
		printf("\n*****Customer %d details*****\n",i+1);
		gets(cus[i].name);
		printf("Name : ");
		gets(cus[i].name);
		printf("Account number : ");
		scanf("%d",&cus[i].AC);
		printf("Balance : ");
		scanf("%d",&cus[i].balance);
	}
	printf("\n**Names of all the customers having balance less than Rs.200**\n");
	balanceless200();
	printf("\n**The names of customers whose balanced is increment and their new balance**\n");
	balanceincrement();
}
