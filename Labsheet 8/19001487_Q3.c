
//19001487

//Q3

#include<stdio.h>
//A program to get maths,physics,chemistry marks of 5 students and calculate the average using struct

struct marks{
	int ID_no ,chem_marks, maths_marks ,phy_marks;
	char name[15];
};

int main(){
	struct marks student[5];
	int i;
	float average[5];
	for(i=0;i<5;i++){
		printf("\n******Student %d details******\n",i+1);
		gets(student[i].name);
		printf("Name : ");
		gets(student[i].name);
		printf("ID no: ");
		scanf("%d",&student[i].ID_no);
		printf("Chemistry marks : ");
		scanf("%d",&student[i].chem_marks);
		printf("Com.Maths marks : ");
		scanf("%d",&student[i].maths_marks);
		printf("Physics marks : ");
		scanf("%d",&student[i].phy_marks);
	}
	printf("\n******Student average marks******\n");
	for(i=0;i<5;i++){
		average[i] = (student[i].chem_marks + student[i].maths_marks + student[i].maths_marks)/3;
		printf("ID number : %d\tName : %s\tAverage marks : %.2f\n",student[i].ID_no,student[i].name,average[i]);
	}
	
}
