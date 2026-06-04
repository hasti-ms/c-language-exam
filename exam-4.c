#include<stdio.h>
int main()
{
	int a[5]={1, 2, 3, 4, 5};
	int *p;
	
	p=&a;
	
	for(int i=0; i<5; i++){
		int t=*(p+i);
		printf("cube of 1st no.:%d\n", t*t*t);
	}
	
}
/*
cube of 1st no.:1
cube of 1st no.:8
cube of 1st no.:27
cube of 1st no.:64
cube of 1st no.:125
*/