
//201151

//Q2

#include<stdio.h>

//program for display arithmetics operations in two matrixes

int mat1[3][3] = {{3,5,7},{1,6,5},{4,9,8}} ;
int mat2[3][3] = {{6,0,2},{4,7,1},{7,2,1}};

int mat_add(){ //define a function to add two matrixes
	int i,j,mat3[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat3[i][j] = mat1[i][j] + mat2[i][j];
			printf("%d\t",mat3[i][j]);

		}
		printf("\n");
	}
}

int mat_sub(){ //define a function to subtract two matrixes
	int i,j,mat3[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat3[i][j] = mat1[i][j]-mat2[i][j];
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}
}

int mat_mul(){ //define a function to multiply two matrixes
	int i,j,mat3[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat3[i][j] = (mat1[i][0]*mat2[0][j]) + (mat1[i][1]*mat2[1][j]) + (mat1[i][2]*mat2[2][j]);
			printf("%d\t",mat3[i][j]);	
		}
		printf("\n");
	}
}

int main()
{
	int i,j;
	
	//to print matrix 1
	printf("Matrix 1\n"); 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){ 
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	
	//to print matrix 2
	printf("\nMatrix 2\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}
	printf("\nAddition of Matrix 1 and Matrix 2 \n");
	mat_add(); // call the function mat_add
	printf("\nSubtraction of Matrix 1 and Matrix 2 \n");
	mat_sub(); // call the function mat_sub
	printf("\nMultiplication of Matrix 1 and Matrix 2 \n");
	mat_mul(); // call the function mat_mul
}
