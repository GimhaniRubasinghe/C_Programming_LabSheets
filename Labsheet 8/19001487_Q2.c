
//19001487

//Q2

#include<stdio.h>
//a program to add two distances in inch-feet using struct.
struct distance{
	int inch,feet;
};

int main(){
	struct distance val1,val2;
	//getting the two distances from user
	printf("Enter the value1\nfeet: ");
	scanf("%d",&val1.feet);
	printf("inch: ");
	scanf("%d",&val1.inch);
	printf("Enter the value2\nfeet: ");
	scanf("%d",&val2.feet);
	printf("inch: ");
	scanf("%d",&val2.inch);
	
	//add them
	int s_feet,s_inch,sum;
	s_inch = val1.inch + val2.inch;
	if(s_inch>=12){//because of 1feet = 12inches
		s_feet = s_inch/12;
		s_inch = s_inch%12;
	}
	s_feet+= val1.feet + val2.feet;
	
	printf("Sum of distance = %d feet %d inch ",s_feet,s_inch);
}
