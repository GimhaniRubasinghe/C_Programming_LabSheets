
//201151

//Q5

#include<stdio.h>

//Program to reads ten numbers and displays the number of distinct numbers and the distinct numbers

int main()
{
	int num[10],arr[10],i,j,k,length;
	 
	for(i=0;i<10;i++){ //to get array from user
	 	printf("Enter element %d : ",i+1);
	 	scanf("%d",&num[i]);
	}	
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(num[i] == num[j]){ //to ignore the numbers which entered twice
				num[j] = 0;
			}
		}
		arr[k] = num[i];
		k++;
	}
	length = 0;
	printf("\nDistinct numbers in the list you entered : {");//to print the list
	for(k=0;k<10;k++){
		if(arr[k] != 0){
			printf("%d,",arr[k]);
			length++; //to get number of distinct in the list
		}
		
	}
	printf("\b}\n");
	printf("The number of distinct numbers in the list you entered : %d",length);
}
