
//Q10

//19001487

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//a program to library

struct book{
	int accession_number;
	int issued;//here i used id the book is issued then it's value will be NULL==-1
	char author[30];
	char title[30];
};

int main(){
	struct book b[20];
	int option,i,count,n,c,temp3;
	char temp1[30],temp2[30];
	do{
		printf("\n******** MAIN MENU *******\n");
	 	printf("1: Display book information\n");
	 	printf("2: Add a new book\n");
	 	printf("3: Display all the books in the library of a particular author\n");
	 	printf("4: Display the number of books of a particular title\n");
	 	printf("5: Display the total number of books in the library\n");
	 	printf("6: Issue a book\n");
	 	printf("7: Exit:\n");
	 	printf("Enter your option:");
	 	scanf("%d",&option);
	 	printf("\n");
		switch(option){
				case 1:	printf("\t\tDetails of All Book");
	                    printf("\n-----------------------------------------------------------\n");
	                    printf("Accession_number\t   Title\t\t  Author\t");
	                    printf("\n");
	                    for( i = 0 ; i <count+1 ; i++)
	                    {
	                    	if(b[i].issued==1){
	                    		printf("%d \t\t\t %s \t\t %s \n",b[i].accession_number,b[i].title,b[i].author);
							}
	                    }
	                    printf("\n");
		 				break;
		 		case 2:	printf("\nHow Many Records You Want to Add: ");
	                    scanf("%d",&n);
	                    printf("\n-----------------------------------------------------------\n");
	                    printf("Add Details of %d Book\n",n);
	                    printf("\n");
	                    c=count;
	                    for(i =c ; i <=c+(n-1) ; i++)
	                    {
	                         printf("Accession_number	:");
	                         scanf("%d",&b[i].accession_number);
	                         gets(b[i].title);
	                         printf("Title			:");
	                         gets(b[i].title);
	                         printf("Author			:");
	                         gets(b[i].author);
	                         b[i].issued=1;
	                         printf("\n"); 
							 count++;   
	                    }
	                    c=0;
		 				break;
				case 3:	gets(temp1);
						printf("\nEnter author Name: ");
	                    gets(temp1);
	                    printf("\n-----------------------------------------------------------\n");
	                    for( i = 0 ; i < count+1; i++)
	                    {
	                         if(strcmp(b[i].author,temp1) == 0)
	                         {
	                              printf("\n%s\n",b[i].title);
	                         }
	                    }
		 				break;
				case 4:	gets(temp2);
						printf("\nEnter title  Name: ");
	                    gets(temp2);
	                    printf("\n-----------------------------------------------------------\n");
	                    c=0;
	                    for( i = 0 ; i < count+1; i++)
	                    {
	                         if(strcmp(b[i].title,temp2) == 0)
	                         {
	                            c++;
	                         }
	                    }
	                    printf("\nNumber of Books under %s title : %d\n",temp2,c);
		 				break;
				case 5:printf("\nTotal Number of Books in Library : %d\n",count-1);
	                    printf("\n");
	                    break;
				case 6:printf("\nEnter Accession_number : ");
	                    scanf("%d",&temp3);
	                    printf("\n-----------------------------------------------------------\n");
	                    for( i = 0 ; i < count ; i++)
	                    {
	                         if(temp3==b[i].accession_number)
	                         {
	                             count--;
	                             printf("\n The book '%s' was issued\n",b[i].title);
	                             b[i].issued=0;
	                         }
	                    }
	 					break;
	            case 7 :printf("Exit"); 
                    	
					}		
		}while(option!=7);
 return 0;
}




