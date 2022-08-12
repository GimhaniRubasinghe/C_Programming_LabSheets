
//201151

//Q8

#include<stdio.h>
#include<string.h>

//program to arrange given 5 non negative integers, such that they form the largest possible number

int main(){
	int arr1[5],arr2[5],arr3[5],i,j,t1=0,t2=0,k=0,max1=0,max2=0;
	
	for(i=0;i<5;i++){ //to get integers from user
		printf("Enter the number %d:",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("\n");
	
	for(i=0;i<5;i++){ //to convert them to one digit number
		arr2[i]=arr1[i];
		arr3[i]=arr1[i];//to use to print unsorted array in result
		if(arr2[i]>=10){
			while(arr2[i]>=9){
				arr2[i]/=10;
			}
		}
	}
	
	for(j=4;j>-1;j--){//to sort two arrays according to one digits array
		max1=arr2[j];	
		for(i=j;i>-1;i--){
			if(arr2[i]>=max1){
				max1=arr2[i];
				max2=arr1[i];
				k=i;
			}			
		}
		t1=arr2[j];
		t2=arr1[j];
		arr2[j]=max1;
		arr1[j]=max2;
		arr2[k]=t1;
		arr1[k]=t2;
	}
	for(i=0;i<5;i++){	
		printf("%d,",arr3[i]);
	}
	printf("\b the largest possible number is ");// to arrange the sorted arr1
	
	for(i=4;i>-1;i--){	
		printf("%d",arr1[i]);
	}
}
