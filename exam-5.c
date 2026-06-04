#include<stdio.h>
int main()
{
	int i, j, a=11;
	
	for(int i=1; i<=5; i++){
		for(int j=1; j<=i; j++){
			printf("%d ", a);
			a++;
		}
		printf("\n");
	}
}
/*
11
12 13
14 15 16
17 18 19 20
21 22 23 24 25
*/