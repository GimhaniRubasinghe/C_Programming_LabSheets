
//19001487

//Q4

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char word[20],*p;
	p = &word;
	FILE* fp;//declare a file pointer
	fp = fopen("myword.txt","a");//open file in append mode
	int a=0,e=0,i=0,o=0,u=0,other =0,count=0;//declare variable to count vowels and others
	int j;
	printf("Enter the word : ");
	scanf("%s",&word);
	fprintf(fp,"\n%s",word);
	strlwr(word);//convert all letters to lower case
	for(j=0;*(p+j)!= '\0';j++){//to count number of vowels ,consanant and total letters
		switch(*(p+j)){
			case 'a' : a++; count++; break;
			case 'e' : e++; count++; break;
			case 'i' : i++; count++; break;
			case 'o' : o++; count++; break;
			case 'u' : u++; count++; break;
			default : other++; count++;
		}
	}
	printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d\nother = %d\ncount = %d\n",a,e,i,o,u,other,count);//display count values
	//to print in file
	if(count<8){
		fprintf(fp,"\t\t%d\t%d\t%d\t%d\t%d\t%d\t%d",a,e,i,o,u,other,count);
	}
	else{
		fprintf(fp,"\t%d\t%d\t%d\t%d\t%d\t%d\t%d",a,e,i,o,u,other,count);
	}
	
	fclose(fp);
	
}
