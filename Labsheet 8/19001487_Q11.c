
//19001487

//Q11

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//a program to supermarket

struct item{
	char item[8];
	float uni;
	char title[30];
	char meas[2];
	float pri;
	float sto;
}it[25];

void display()
{
	int i;
	printf("\n ItemCode");
	printf("\tUnit");
	printf("\t  price");
	printf("\t    Stock");
	printf("\tItem");
	printf("\n ---------------------------------------------------------------\n");
	for(i=0;i<25;i++)
	{
		if(it[i].pri == 0)
			return;
	
		printf(" %s",it[i].item);
		printf("\t%3.1f%s",it[i].uni,it[i].meas);
		printf("\t  %3.1f",it[i].pri);
		printf("\t    %3.1f",it[i].sto);
		printf("\t%s\n",it[i].title);
	}
}

int newi()
{
	int i,j,k,m=0,inum;
	char b[3];
	for(j=400;j<425;j++)
	{
		for(k=0;k<25;k++)
		{
			for(i=0;i<3;i++)
			{
				b[i]=it[k].item[i+4];
			}
	
			inum=atoi(b);

			if(j == inum)
			{	
				m=1;
				break;
			}
			else
				m=0;
		}
		
		if(m==0)
		{
			break;
		}
	}
	itoa(j,b,10);
	
	for(i=0;i<25;i++)
	{
		if(it[i].pri == 0)
		{
			strcpy(it[i].item,"ITEM");
			strcat(it[i].item,b);
			return i;
			break;
		}
	}	
}
void bills()
{
	char bill[]="ITEM402,2/ITEM412,2.5 kg/ITEM404,2/ITEM419,1500 ml/";
	char i[7],q[8],m[2];
	int j=0,k;
	float qu,tot=0,gtot=0;
	
	printf("\n\n\n ******** BILL *********\n");
	printf("\n Item Code");
	printf("\tQuantity");
	printf("\tUnit Price");
	printf("\tTotal");
	printf("\n ---------------------------------------------------------------\n");
	
	while(j<strlen(bill))
	{
		k=0;
		strcpy(i," ");
		while(bill[j] != ',')
		{
			i[k]=bill[j];
			j++;
			k++;
		}
		
		j++;
		k=0;
		strcpy(q," ");
		while(bill[j] != ' ' && bill[j] != '/')
		{
			q[k]=bill[j];
			k++;
			j++;
		}
		
		qu = atof(q);
		k=0;
		strcpy(m," ");
		if(bill[j] == ' ')
		{
			j++;
			
			while(bill[j] != '/')
			{
				m[k]=bill[j];
				k++;
				j++;
			}
			
			j++;
		}
		else
			j++;
		
		for(k=0;k<25;k++)
		{
			if(strcmp(it[k].item,i) == 0)
			{
				printf(" %s",i);
				
				if(strcmp(it[k].meas,"kg")==0 && strcmp(m,"g")==0)
					qu=qu/1000;
				if(strcmp(it[k].meas,"g")==0 && strcmp(m,"kg")==0)
					qu=qu*1000;
				if(strcmp(it[k].meas,"L")==0 && strcmp(m,"ml")==0)
					qu=qu/1000;
				if(strcmp(it[k].meas,"ml")==0 && strcmp(m,"L")==0)
			    	qu=qu*1000;
					
				printf("\t%5.1f",qu);
				printf("\t         %3.1f",it[k].pri);
				tot= qu*it[k].pri/it[k].uni;
				gtot= gtot + tot;
				printf("\t         %5.1f\n",tot);
				break;
			}
		}
	}
	
	printf("\n ---------------------------------------------------------------\n");
	printf("\t\tGRAND TOTAL: %.2f",gtot);
	printf("\n ---------------------------------------------------------------\n");
	
}

void main()
{
	int n;
	
	strcpy(it[0].item,"ITEM400");
	strcpy(it[0].title,"Sunlight soap");
	it[0].uni = 1;
	strcpy(it[0].meas,"");
	it[0].pri = 27;
	it[0].sto = 200;
	
	strcpy(it[1].item,"ITEM401");
	strcpy(it[1].title,"Anchor Packet(400g)");
	it[1].uni = 1;
	strcpy(it[1].meas,"");
	it[1].pri = 170;
	it[1].sto = 50;
	
	strcpy(it[2].item,"ITEM404");
	strcpy(it[2].title,"Anchor Packet(1kg)");
	it[2].uni = 1;
	strcpy(it[2].meas,"");
	it[2].pri = 550;
	it[2].sto = 25;
	
	strcpy(it[3].item,"ITEM412");
	strcpy(it[3].title,"Rice");
	it[3].uni = 1;
	strcpy(it[3].meas,"kg");
	it[3].pri = 80;
	it[3].sto = 300.50;
	
	strcpy(it[4].item,"ITEM420");
	strcpy(it[4].title,"Dhal");
	it[4].uni = 500;
	strcpy(it[4].meas,"g");
	it[4].pri = 65.50;
	it[4].sto = 200.75;
	
	strcpy(it[5].item,"ITEM419");
	strcpy(it[5].title,"Cordial Bottle");
	it[5].uni = 250;
	strcpy(it[5].meas,"ml");
	it[5].pri = 225.50;
	it[5].sto = 10;
	
	strcpy(it[6].item,"ITEM411");
	strcpy(it[6].title,"Sun Flower oil");
	it[6].uni = 1;
	strcpy(it[6].meas,"L");
	it[6].pri = 160;
	it[6].sto = 20;
	
	display();
	
	n = newi();
	strcpy(it[n].title,"HP Pencil");
	it[n].uni = 1;
	strcpy(it[n].meas,"");
	it[n].pri = 12.50;
	it[n].sto = 100;
	
	n = newi();
	strcpy(it[n].title,"Sun Silk Shampoo");
	it[n].uni = 1;
	strcpy(it[n].meas,"");
	it[n].pri = 38;
	it[n].sto = 30;
	
	n = newi();
	strcpy(it[n].title,"Sugar");
	it[n].uni = 250;
	strcpy(it[n].meas,"g");
	it[n].pri = 65;
	it[n].sto = 150;
	
	bills();
}
