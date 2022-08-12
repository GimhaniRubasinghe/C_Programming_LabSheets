
//19001487

//Q7

#include<stdio.h>
#include<string.h>

//a program to compare two dates entered by user

struct date{
	int date,month,year;
};

int main(){
	struct date d1,d2;
	printf("Enter date(fomat : yyyy mm dd) :");
	scanf("%d %d %d",&d1.year,&d1.month,&d1.date);
	printf("Enter date(fomat : yyyy mm dd) :");
	scanf("%d %d %d",&d2.year,&d2.month,&d2.date);
	if(d1.year ==d2.year && d1.month == d2.month && d1.date == d2.date){
		printf("Dates are equal");
	}
	else{
		printf("Dates are not equal");
	}
}
