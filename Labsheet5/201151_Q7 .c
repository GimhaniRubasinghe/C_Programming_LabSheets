
//201151

//Q7

#include<stdio.h>

//progrm for sort 10 number of array by using bubble sort method

int main()
{
    float arr[10] , temp;
	int i,j,k ;
    for(i = 0 ;i<10;i++)//input numbers and make list
    {
        printf("Enter element %d : ",i+1);//to get array from user 
        scanf("%f" , &arr[i]);
    }
    printf("\nUnsorted array : {"); //to print unsorted array
	for(i=0;i<10;i++){
	 	printf("%.1f ,",arr[i]);
	}
	printf("\b}");

    //start to bubble sort
    for(j=9;j>=0;j--){
        for(k=0;k<j;k++){
            if(arr[k]>arr[k+1]){
                temp = arr[k+1];
                arr[k+1] = arr[k];
                arr[k] = temp;
            }
        }
    }
    printf("\nsorted array : {"); // to print sorted array
	for(i=0;i<10;i++){
	 	printf("%.1f ,",arr[i]);
	}
	printf("\b}");
    
}
