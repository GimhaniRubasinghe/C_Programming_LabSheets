
//19001487

//Q11

#include <stdio.h>

//a program to sort an array using a pointer
void swap(int *a,int *b){//define swap fuction
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main(){
	int n,k;
	printf("Enter size of array : ");//to get size of array
	scanf("%d",&n);
	
	int i,j,arr[n],*p;
	p = &arr[0];//store first element of array in pointer variable
	for(i=0;i<n;i++){//to get elements of array
		printf("Enter element %d : ",i+1);
		scanf("%d, ",(p+i));
	}
	
	printf("Unsorted array : {");
	for(i=0;i<n;i++){//print unsorted array
		printf("%d, ",*(p+i));
	}
	printf("\b\b}\n");
	
	for(i=n-1;i>0;i--){//sort array using bubble sort
		for(j=0;j<i;j++){
			if(*(p+j)>*(p+j+1)){
				swap((p+j),(p+j+1));
			}
		}
	}
	
	printf("Sorted array : {");
	for(i=0;i<n;i++){// print sorted array
		printf("%d, ",*(p+i));
	}
	printf("\b\b}\n");
}
