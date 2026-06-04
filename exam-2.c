#include<stdio.h>
int main()
{
	int a[5]; 
	
	printf("enter no.:\n");
	for(int i=0; i<5; i++){
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	int t=a[0]+a[1]+a[2]+a[3]+a[4];
	    printf("sum of array is:%d",t);	
}
/*
enter no.:
a[0]=1
a[1]=2
a[2]=3
a[3]=4
a[4]=5
sum of array is:15
*/