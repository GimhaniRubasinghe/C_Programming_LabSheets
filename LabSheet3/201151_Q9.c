
//201151

//Q9

#include<stdio.h>
int main()
{
	int x,i,count = 0,max =0; 
	char arr[x+1];

	printf("Enter the length of number : "); // get length of number from user to assign length of arr
	scanf("%d",&x);
	printf("Enter the number : "); // get the number from user
	scanf("%s",&arr);
	
	for (i=0;i<x;i++){
		if(arr[i] =='0'){ //to count should stop counting and become 0 when arr[i] is 0
			count =0;
		}
		else{
			count+=1;
			if (count>max){ //if count is greater than zero max should update before count become 0
				max = count;
			}
		}
	}
	printf("Max number of consecutive 1s is %d",max);

}
