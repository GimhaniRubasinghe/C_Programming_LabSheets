
//19001487

//Q15

#include <stdio.h>
#include <string.h>
//a program to print all the alphabets using a pointer

int main(){
	char C, L,*p_c,*p_l;
	p_c = &C;
	p_l = &L;
	
	for(C ='A',L = 'a';C<='Z'&&L<='z';C++,L++){//print alphabets
		printf("%c%c ",*p_c,*p_l);
	}
	
}
