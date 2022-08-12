
//201151

//Q7

#include<stdio.h>

//Programm to find birthday from using NIC

int NIC,num,year,date,month ; // declare global veriables

int DoB()
{
	num = NIC/10000; //to ignore last 4 digits
	year= num/1000; //to get first two digits
	date = num%1000; //to get  mid value(3rd,4th and 5th digits)

	if(date > 500){ //if the owner of NIC is female mid value should dicrease by 500
		date -= 500; 
	}
	
	if(date<=335){
		if(date<=305){
			if(date<=274){
				if(date<=244){
					if(date<=213){
						if(date<=182){
							if(date<=152){
								if(date<=121){
									if(date<=91){
										if(date<=60){
											if(date<=31){
												month = 1 ;
												}
											else{
												month = 2;
												date -=31;
												}
											}
										else{
											month = 3;
											date-=60;
											}			
									}
									else{
										month = 4;
										date -= 91;
									}	
								}
								else{
									month = 5;
									date -= 121;
								}
							}
							else{
								month = 6;
								date -= 152;
							}
						}
						else{
							month = 7;
							date -= 182;
						}
					}else{
						month = 8;
						date -= 213;
					}
				}
				else{
					month = 9;
					date -= 244;
				}
			}
			else{
				month = 10;
				date -= 274 ;
			}
		}
		else{
			month = 11;
			date -=305;
		}
	}
	else{
		month = 12;
		date -=335;
	}
	printf("\nDate of birthday of NIC owner = %04d.%02d.%02d ",year+1900, month ,date); // to print DoB
}

int main()
{
	
 	printf("Enter your NIC(just 9 without v) : ");//to get NIC value from user input 
 	scanf("%d",&NIC);
 	if(NIC/1000000000 != 0){
 		printf("Invalid NIC.please check the number\n");//to ignore when NIC have more than 9 values
	}
	else{
		DoB();
	}
 	
 
 	
 	
		
}
