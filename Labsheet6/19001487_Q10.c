
//19001487

//Q10

#include <stdio.h>
#include <string.h>
//a program in C to count the number of vowels and consonants in a string

int main(){
	int n;
	printf("Enter the length of string : ");//get the size of string
	scanf("%d",&n);
	
	int i,count_V = 0,count_C = 0;
	char arr[n], *p;
	
	printf("Enter the string : ");
	scanf("%s",&arr);
	strlwr(arr);
	p = &arr[0];//store array in pointer variable
	
	for(i=0;i<n;i++){ //count number of vowels and consonant
		switch(*(p+i)){
			case 'a' : count_V++; break;
			case 'e' : count_V++; break;
			case 'i' : count_V++; break;
			case 'o' : count_V++; break;
			case 'u' : count_V++; break;
			default  : count_C++;
		}
	}
	printf("Number of vowels in the string : %d\nNumber of consonants in the string : %d",count_V,count_C);
}
