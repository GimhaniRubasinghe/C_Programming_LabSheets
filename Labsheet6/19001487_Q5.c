
//19001487

//Q5

#include <stdio.h>
//a program to find the largest element using Dynamic Memory Allocation

int max(int *a,int *b){//function to get max between 2 numbers
	return *a>*b? *a : *b;
}
int main(){
	int n;
	printf("Enter the number of elements you wish to entered: ");//get the size of array
	scanf("%d",&n);
	
	int *ptr,i;
	ptr = (int)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){//get the numbers
		printf("Enter element %d : ",i+1);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<n-1;i++){
		ptr[i+1] = max(&ptr[i],&ptr[i+1]);//call the max function
	}
	printf("Max value : %d",ptr[n-1]);
	free(ptr);
}
