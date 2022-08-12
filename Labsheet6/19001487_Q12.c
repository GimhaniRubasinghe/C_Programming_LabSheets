
//19001487

//Q12

#include <stdio.h>
//a program to compute the sum of all elements in an array using pointers.

int main(){
	int n;
	printf("Enter the number of elements in array : ");//to get the size of array
	scanf("%d",&n);
	
	int i,arr[n],sum=0,*p;
	p = &arr[0];//store first element of array in pointer variable
	for(i=0;i<n;i++){
		printf("Enter the number : ");
		scanf("%d",(p+i));
		sum+= *(p+i);
	}
	printf("Summ of the array : %d\n",sum);
}
