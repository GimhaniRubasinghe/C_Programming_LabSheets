
//201151

//Q14

#include<stdio.h>
int main()
{
	int A,B,C,Max;
	printf("Enter 3 numbers :"); 
	scanf("%d %d %d",&A,&B,&C); // to get A,B,C
	if (A>B){ // check whethere which one is the lagerest number
		if(A>C){
			Max = A;
		}
		else{
			Max = C;
		}
	}
	else{
		if(B>C){
			Max = B;
		}
		else{
			Max = C;
		}
	}
	printf("%d is the largest number among  (%d %d %d)",Max,A,B,C);
			
}
