
//201151

//Q11

#include<stdio.h>
#include<string.h>

//Program to check whether a given registration number is valid

int main()
{
	int length,i,count,val=0;
	char reg[15] ;
	
	printf("Enter your registration number : ");
	scanf("%s",&reg);

	while (reg[length] != '\0'){ //to get length of the array
		length++;
	} 
	strupr(reg);	
	printf("\n-----------------------------VALIDATING REGISTRATION NUMBER : %s-----------------------------------------------\n",reg);
	
	printf("\nCondition 01 : There are exactly 8 characters\n\t\t\t");//condition 1
	
	if(length==8){
		printf("The first condition satisfies\n");
	}
	else{
		printf("The first condition doesn't satisfy : There isn't 8 characters\n");
		val++;
	}
	
	printf("\nCondition 02 : First letter should be 'S'\n\t\t\t");//condition 2
	
	if(reg[0] == 'S'){
		printf("The second condition satisfies\n");
	}
	else{
		printf("The second condition doesn't' satisfy : The first letter isn't 'S'\n");
		val++;
	}
	
	printf("\nCondition 03 : There should be exactly two '/'s.\n\t\t\t");//condition 3
	
	for(i=0;i<length;i++){
		if(reg[i] == '/'){
			count++;
	}
	}
	if(count==2){
		printf("The third condition satisfies\n");
	}
	else{
		printf("The third condition doesn't satisfy : There isn't 2 '/'s \n");
		val++;
	}
	
	printf("\nCondition 04 : The year is represented by two digits in between two '/'s\n\t\t\t");//condition 4
	
	if(reg[1] == '/' && reg[4] == '/' ){
		printf("The forth condition satisfies\n");
	}
	else{
		printf("The forth condition doesn't satisfy : There isn't batch of student in between the two ‘/’s\n");
		val++;
	}
	
	printf("\nCondition 05 : Last three digits immediately after the sencond slath represents the student number\n\t\t\t");//condition 5
	if((reg[5]>= '0' && reg[5]<= '9') && (reg[6]>= '0' && reg[6]<= '9') && (reg[7]>= '0' && reg[7]<= '9')){
		printf("The fifth condition satisfies\n");
	}
	else{
		printf("The fifth condition doesn't satisfy : No integer representation\n");
		val++;
	}

	//validation of registraion number
	printf("\n-----------------------------THE REGISTRATION NUMBER IS ");
	if(val>0){
		printf("NOT VALID----------------------------------------------------\n\n");
	}
	else{
		printf("VALID---------------------------------------------------------\n\n");
	}

}
