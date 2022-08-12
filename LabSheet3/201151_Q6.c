
//201151

//Q6

#include<stdio.h>
int main()
{
	float unit,price,discount;
	int quantity;
	printf("Enter unit price of sales product: Rs  "); //to get unit price from user
	scanf("%f",&unit);
	printf("Quantity : "); // to get Quantity from user
	scanf("%d",&quantity);
	price = unit*quantity ; 
	if (quantity>160){ // if quantity greater than 160,discount is 20%
		discount = price*0.2;
	}
	else if(quantity<120){ // if quantity less than 120,discount is 0%
		discount = 0;
	}
	else{
		discount = price*0.15;// if quantity less than 160 and greater than 120,discount is 15% 
	}
	printf("\nprice : Rs %.2f\n",price);
	printf("discount : %.2f\n",discount);
	printf("Revenue : Rs %.2f",price-discount);//total = price*discount
}
