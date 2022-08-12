
//201151

//Q13

#include<stdio.h>

//Program to check whether balanced or unbalanced of parentheses

int main()
{
	int length ,i=0 , top=-1;
	char arr[length], stack[length];	
	
	printf("Enter the parentheses : ");// to get the parentheses from user
	scanf("%s",&arr);
	
	while (arr[length] != '\0'){ //to get length of parentheses
		length++;
	}
	
	while(i<length){
		if((arr[i] == '(') || (arr[i] == '[') || (arr[i] == '{')){ //to enter starting brackets to the stack  
			stack[++top] = arr[i];
		}
		//to pop closing brackets from stack
		else if(arr[i] == ')'){ 
			if (stack[top] == '('){
				top--;
			}
			else{
				break;
			}
		}
		else if(arr[i] == ']'){
			if (stack[top] == '['){
				top--;
			}
			else{
				break;
			}
		}
		else if(arr[i] == '}'){
			if (stack[top] == '{'){
				top--;
			}
			else{
				break;
			}
		}
		i++;
	}
	if (top == -1){ //to display whethere it is balanced or unbalanced
		printf("It is a balanced parentheses");
	}
	else{
		printf("It is a unbalanced parentheses");
	}
	
}
