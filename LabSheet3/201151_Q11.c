
//201151

//Q11

#include<stdio.h>
int main()
{
	float BMI,Weight,Height;
	printf("Enter the weight(kg) : "); // to get user's weight 
	scanf("%f",&Weight);
	printf("Enter the height(m) : ");//to get user's height 
	scanf("%f",&Height);
	
	printf("\n");
	BMI = Weight/(Height*Height);
	if(BMI<18.5){ //check whethere his BMI is underweight or nomal weight or overweight or obesity
		printf("your BMI is Underweight");
	}
	else if((18.5<=BMI)&&(BMI<25.0)){
		printf("Your BMI is Nomarl weight");
	}
	else if((25.0<=BMI)&&(BMI<30.0)){
		printf("Your BMI is Overweight");
	}
	else{
		printf("Your BMI is obesity");
	}	
}
