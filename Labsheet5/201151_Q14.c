
//201151

//Q14

#include<stdio.h>
#include<string.h>

//Program to check whether some word is available in the phrase

int main()
{
	int i,j=0;
	char phrase[37] = "Cut your coat according to the cloth";
	printf("phrase : %s\n",phrase);
	
	strlwr(phrase);

	for(i=0;i<35;i++){
		if((phrase[i] == 'c') && (phrase[i+1] == 'o') && (phrase[i+2] == 'r') && (phrase[i+3] == 'd')){//to check whethere word 'cord' is in the phrase
				j=1;
				printf("There is word \"cord\" in this phrase(letter %d to %d)",i+1,i+4);
				break;
		}
	}
	if(j==0){ // to display whenever there is not word 'cord' in the phrase 
		printf("There is not word \"cord\" in this phrase");
	}		
}
