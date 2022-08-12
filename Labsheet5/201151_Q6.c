
//201151

//Q6

#include<stdio.h>

//progrm for sort 10 integers of array by using selection sort method

int main()
{
	int arr[10] ,i,j,max,temp;
	
	for(i=0;i<10;i++){ //to get array from user
	 	printf("Enter element %d : ",i+1);
	 	scanf("%d",&arr[i]);
	}
	 
	printf("\nUnsorted array : {");//to print unsorted array
	for(i=0;i<10;i++){
	 	printf("%d ,",arr[i]);
	}
	printf("\b}");
	
	//start to selection sort from finding largest number
	for(i=9;i>=0;i--){
	 	max = i;
		for(j=i-1;j>=0;j--){
	 		if(arr[j]>arr[max]){
	 			max = j;
			}
		}
		// to swap arr[max] and arr[i]);
		temp = arr[max];
    	arr[max] = arr[i];
        arr[i] = temp;
	}
	 
	printf("\nsorted array : {");//to print sorted array
	for(i=0;i<10;i++){
	 	printf("%d ,",arr[i]);
	}
	printf("\b}");
}


