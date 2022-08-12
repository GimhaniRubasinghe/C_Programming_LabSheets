
//19001487

//Q6

#include <stdio.h>

//a program calculate the length of the string using a pointer

int main(){
	int n,i=0;
	char arr[],*p;
	
	printf("Enter the string : ");
	scanf("%s",&arr);
	p = &arr[0];//store first letter of the string in pointer variable
	while(*(p+i) !='\0'){ //count string length
		i++;
	}
	printf("Length of the string : %d",i);
}
