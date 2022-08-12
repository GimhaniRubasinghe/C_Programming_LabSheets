
//201151

//Q15

#include<stdio.h>
#include<string.h>
int main()
{
	int A,B,C;
	float disc,deno,X1,X2;
	printf("ax2+bx+c=0 , enter a,b,c respectively :  ");//to get a,b,c value from user
	scanf("%d %d %d",&A,&B,&C);
	disc = (B*B) - (4*A*C);
	deno = 2*A;
	if (disc>0){ // if disc>0,there are 2 real roots
		printf("The roots are real roots\n");
		X1 = (-B/deno) + (sqrt(disc)/deno);
		X2 = (-B/deno) - (sqrt(disc)/deno);
		printf("(%.2f) , (%.2f)\n",X1,X2);
	}
	else if(disc==0){ // if disc=0,there is only one real root because X1=X2
		printf("The roots are repeated roots\n");
		X1 = -B/deno;
		printf("%.2f\n",X1);	
	}
	else{ // if disc<0,there are not real roots
		printf("The roots are imaginary roots\n");
	}
}
