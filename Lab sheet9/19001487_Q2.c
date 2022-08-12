
//19001487

//Q2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee{
	char name[10];
	int no;
	float salary;
	int hours;
};
float OT(int hours){//function to calculate OT
	float OT_amount = hours*15.00;
	return OT_amount;
}
float net_salary(float salary,int hours){//function to net salary
	float OT_amount = hours*15.00;
	float netsalary = salary+salary*0.35 + OT_amount;
	return netsalary;
}
int main(){
	struct employee emp[4];
	FILE* fp;
	float T_basic,T_netsalary=0;
	
	fp = fopen("data.txt","r");//open file read mode
	char a[100];
	int i=0,sr;
	//read the data from file
	sr = fscanf(fp,"%[^\n]s",a);
	while(fscanf(fp,"%s %d %f %d",&emp[i].name,&emp[i].no,&emp[i].salary,&emp[i].hours)!= EOF)
	{
		i++;
    }	
	
	printf("Employee name\tBasic salary(Rs)\tOT amount\tNet salary\n");
	for(i=0;i<4;i++){
		printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\n",emp[i].name,emp[i].salary,OT(emp[i].hours),net_salary(emp[i].salary,emp[i].hours));
		T_netsalary += net_salary(emp[i].salary,emp[i].hours);//calulate total of salaries
	}
	
	T_basic = emp[0].salary+emp[1].salary+emp[2].salary+emp[3].salary;//calculate totl basic salaries
	printf("\nTotalamount of money this company should have to pay the employee basic salaries : %.2f\n",T_basic);
	printf("\nTotalamount of money this company should have to pay the employee salaries : %.2f",T_netsalary );
		
	fclose(fp);
}
