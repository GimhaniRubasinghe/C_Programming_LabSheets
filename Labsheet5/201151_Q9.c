
//201151

//Q9

#include<stdio.h>

//program to count the number of 2s in given range of integers. 

int main()
{
	int count=0,low,high,i,j;
	
	printf("Enter the start value of range : "); // to get the start value of range from user
	scanf("%d",&low);
	printf("Enter the end value of range : "); //to get the end value of range from the user
	scanf("%d",&high);
		
		for(i=low;i<=high;i++){
			j=i; //because j change in while loop
			
			while (j>10){
				
				if(j%10 == 2){ //to check whether 2s in the number from right to left side 
					count++;
				}	
				j = j/10; //to remove numbers from right side 		
			}
			if(j==2){
				count++; //to count 2 and reminding 2s,because it couldn't go inside the while loop
			}
		}
	printf("The number of 2s in given range of integers is %d",count); 	
}
