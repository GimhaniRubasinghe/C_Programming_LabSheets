
//201151

//Q2

#include<stdio.h>
int number , count;
 int F_COUNT(){ //declare a function that increments count by 1 and set it back to 0 when it reaches multiples of 9.
 	if(number%9 == 0){
 		count =0; //set count back to 0 when number reaches multiples of 9.
	 }
	 else{
	 	count++; //increament count by 1 when number not equel to multiples of 9
	 }
 }

int main()
{
	//printf("If you want to exit ,type 'E' ")
	while(1){
		printf("Enter the number : "); //to get number from user
		scanf("%d",&number);
		F_COUNT();
		printf(" count = %d\n",count);
	}
}

