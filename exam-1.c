#include<stdio.h>
int main()
{
	int a, b, choice;
	
	printf("press 1 for addition\n");
	printf("press 2 for subtraction\n");
	printf("press 3 for multiplication\n");
	printf("press 4 for division\n");
	
	printf("choose the no.:");
	scanf("%d", &choice);
	
	printf("\nenter first no.:");
	scanf("%d", &a);
	
	printf("enter second no.:");
	scanf("%d", &b);
	
	switch (choice){
		case 1:
			printf("addition is :%d", a+b);
			break;
		case 2:
			printf("subtraction is :%d", a-b);
			break;
		case 3:
			printf("multiplication is :%d", a*b);
			break;
		case 4:
			printf("division is :%d", a/b);
			break;
		default:
			printf("invalid choice!!");
			break;
	}
}
/*
press 1 for addition
press 2 for subtraction
press 3 for multiplication
press 4 for division
choose the no.:1

enter first no.:2
enter second no.:3
addition is :5
*/