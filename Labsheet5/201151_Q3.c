
//201151

//Q3

#include<stdio.h>

double arr[3][5] = {{34.5,56.7,12.6,98.4,54.21},{89.55,54.2,98.4,73.2,21.45},{34.5,98.4,21.45,98.4,9.3}};

int A_total(){ //a)define a function to Calculate the total of the elements in the array
	int i,j;
	double total = 0;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			total += arr[i][j];	
		}
	}
	printf("%.2f\n",total);	
}

int A_avg(){ //b)define a function to Calculate the average of the elements in the array
	int i,j,count=0;
	double total=0,avg;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			total += arr[i][j];
			count++;	
		}
	}
	avg = total/count;
	printf("%.2f\n",avg);
}

int A_min(){ //c)define a function to Find the minimum element in the array
	int i,j;
	double min = arr[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			if(arr[i][j]<min){
				min = arr[i][j];
			}	
		}
	}
	printf("%.2f\n",min);
}

int A_max(){ //d)define a function to Find the maximum element in the array
	int i,j;
	double max =0;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			if(arr[i][j]>max){
				max = arr[i][j];
			}	
		}
	}
	printf("%.2f\n",max);
}

int main()
{	
	printf("Total of the elements in the array = ");
	A_total();
	printf("Average of the elements in the array = ");
	A_avg();
	printf("Minimum element in the array = ");
	A_min();
	printf("Maximum element in the array = "); 
	A_max();
	
	// A_mode() : e)to find element(s) which appears the maximum number of times in the array.
	int i,j,k,l,m,n,count,mode = 1;
	double Arr1[n+1];
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			m=j +1;
			count = 1;
			if(arr[i][j] != 0){
				for(k=i;k<3;k++){
					for(l=m;l<5;l++){
						if(arr[k][l] == arr[i][j]){
							arr[k][l] = 0;
							count++;
						}
					}
					m = 0;	
				}
				if(mode<count){
					mode = count;
					n=0;
					Arr1[n++] = arr[i][j];
				}
				else if(mode== count){
					Arr1[n] = arr[i][j];
					Arr1[++n] = 0;
				}
			}
			
		}
	}
	printf("Element(s) which appears the maximum number of times in the array = {");
	for(m=0;m<n;m++){
	
		if(Arr1[m] == 0){
			break;
		}
		printf("%.2f,",Arr1[m]);
	}
	printf("\b}");
}	

