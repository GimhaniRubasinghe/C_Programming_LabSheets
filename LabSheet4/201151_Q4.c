
//201151

//Q4

#include<stdio.h>
#define T_overs 20

//T20 cricket prediction program

int overs , score[4];
float C_RR , H_RR[3];

int F_SCORE() //to predicate the score to remainnong overs by using current run rate
{
	overs = T_overs - overs; //to calculate remainning overs
	score[0] = C_RR * overs;
	if(C_RR>H_RR[0]){
		H_RR[0] = C_RR;
		if(H_RR[0]>H_RR[1]){
			H_RR[1] = H_RR[0] + H_RR[1];
			H_RR[0] = H_RR[1] - H_RR[0];
			H_RR[1] = H_RR[1] - H_RR[0];
			if(H_RR[1]>H_RR[2]){
				H_RR[2] = H_RR[1] + H_RR[2];
				H_RR[1] = H_RR[2] - H_RR[1];
				H_RR[2] = H_RR[2] - H_RR[1];
					
			}
		}
	}
	printf("Prediction of the projected score for current run rate : %d\n",score[0]);
	
	//to display 3 higher runrates than current runrate and their predicate scores for remaining overs
	printf("Higher runrates of the inning and their predicate scores for remaining overs: \n");
	if(H_RR[0]>C_RR){
		score[1] = H_RR[0] * overs;
		printf("%.2f per over\t : %d\n",H_RR[0],score[1]);
	}
	if(H_RR[1]>C_RR){
		score[2] = H_RR[1] * overs;
		printf("%.2f per over\t : %d\n",H_RR[1],score[2]);
	}
	if(H_RR[2]>C_RR){
		score[3] = H_RR[2] * overs;
		printf("%.2f per over\t : %d\n",H_RR[2],score[3]);
	}
	else{
		printf("No Higher values\n");
	}
	
}

int main()
{
	while (1){
		printf("Enter the number of overs played : ");//to get number of overs played from user
		scanf("%d",&overs);
		if(overs>=20){
			printf("number of played overs is higher than or equel to Total overs\n");
			break;
		}
		printf("Enter the current runrate : ");// to get current runrate from user
		scanf("%f",&C_RR);
		F_SCORE();
		printf("\n");
	}
}
