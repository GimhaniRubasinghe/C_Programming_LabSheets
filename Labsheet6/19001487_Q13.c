
//19001487

//Q13

#include <stdio.h>

//a program to print the elements of an array in reverse order using pointers.

int main(){
	int n;
	printf("Enter the size of an array: ");//to get size of array
	scanf("%d",&n);
	
	int i,arr[n],*p;
	p = &arr[0];
	
	for(i=0;i<n;i++){//get elements of array
		printf("Enter the number: ");
		scanf("%d",(p+i));
	}
	printf("array in order: {");
	for(i=0;i<n;i++){ //print array in order
		printf("%d, ",*(p+i));
	}
	printf("\b\b}\n");
	
	printf("array in reverse order: {");
	for(i=n-1;i>=0;i--){ //print array in reverse order
		printf("%d, ",*(p+i));
	}
	printf("\b\b}\n");		
}
