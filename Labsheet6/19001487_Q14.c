
//19001487

//Q14

#include <stdio.h>
#include <string.h>
//a program to print a string in reverse order.

int main(){
	int n,i;
	char arr[n],*p;
	p = &arr[0]; //store first letter of the string in pointer variable
	
	printf("Enter the string : ");
	scanf("%s",&arr);
	n = strlen(arr);//to get the size of array
	
	printf("String in reverse order : ");
	for(i=n-1;i>=0;i--){ //to print the string reverse order
		printf("%c",*(p+i));
	}
}
