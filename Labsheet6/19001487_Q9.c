
//19001487

//Q9

#include <stdio.h>
#include <string.h>
//a program to print all permutations of a given string using pointers.

void swap(char *a,char *b){//define swap fuction
	char c;
	c = *a;
	*a = *b;
	*b = c;
}
int permutation(char *a,int start,int end){
	int i;
	if(start == end){
		printf("%s\n",a);//print the string
	}
	else{
		for(i=start;i<=end;i++){
			swap((a+start),(a+i));//call the swap function
			permutation(a,start+1,end);
			swap((a+start),(a+i));//get back original order to the string
		}
	}
}
int main(){
	int n;
	char arr[n], *p;
	p = &arr[0];
	printf("Enter the string : ");
	scanf("%s",&arr);
	permutation(arr,0,strlen(arr)-1);//call the permutation function
 	
 }

