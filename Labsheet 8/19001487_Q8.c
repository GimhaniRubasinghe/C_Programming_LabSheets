
//19001487

//Q8

#include<stdio.h>
#include<string.h>

// Store the current date in the struct and add 45 days to the current date and display the final date.

struct date{
	int date,month,year;
};

int main(){
	struct date d;
	printf("Enter current date(fomat : yyyy mm dd) :");
	scanf("%d %d %d",&d.year,&d.month,&d.date);
	
	//add 45 days
	d.date += 45;
	if(d.date>=30){
		if(d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11){
			d.month += d.date/30;
			d.date = d.date%30;
		}
		else if(d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 || d.month == 8 || d.month == 10 || d.month == 12){
			d.month += d.date/31;
			d.date = d.date%31;
		}
		else{
			d.month += d.date/28;
			d.date = d.date%28;
		}
	} 
	if(d.month>=12){
		d.year += d.month/12;
		d.month = d.month%12;
	}
	printf("Current date + 45 days = %04d %02d %02d",d.year,d.month,d.date);
}
