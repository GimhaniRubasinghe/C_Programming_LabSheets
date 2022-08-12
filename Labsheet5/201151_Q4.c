
//201151

//Q4

#include<stdio.h>

//program for given values of five students’ scores, gets the best score, and then assigns grades

int main()
{
	float score[5], best_score;
	int i;
	char Grade;
	
	for(i=0;i<5;i++){
		printf("Enter the score of student no %d : ",i+1);//to get students' scores grom user
		scanf("%f",&score[i]);
	} 
	
	for(i=0;i<5;i++){
		if(score[i]>best_score){ //get th best score
			best_score = score[i];
		}
	}
	printf("\nGrades of students\n\n");
	for(i=0;i<5;i++){ // assign grades
			if(score[i] >= best_score-10) 
				Grade = 'A';	
			else if(score[i] >= best_score-20)
				Grade = 'B';
			else if(score[i] >= best_score-30)
				Grade = 'C';
			else if(score[i] >= best_score-40)
				Grade = 'D';
			else 
				Grade = 'F';
			printf("\tstudent No %d : %c\n",i+1,Grade);
		}
		
	}
