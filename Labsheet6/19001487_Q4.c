
//19001487

//Q4

#include <stdio.h>
//a program to store n elements in an array and print the elements using pointers.

int main(){
	int i,n;
	int *p; //declare pointer variable
	
	printf("Enter the number of elements you wish to store in array: ");//get size of array
	scanf("%d",&n);
	
	int arr[n];
	p = &arr[0]; //store address of first element in array to pointer variable
	//strore elements
	for(i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",(p+i));
	}
	//print elements
	printf("The array you entered : {");
	for(i=0;i<n;i++){
		printf("%d ,",*(p+i));
	}
	printf("\b\b}");
}
