#include<stdio.h>
#include<omp.h>
int main()
{
	int i, num;
	num = 100;
	int sum = 0;

	int a[num], b[num], c[num];

	for(i=0;i<num;i++)
		a[i]=num*num%100;

	for(i=0;i<num;i++)
		b[i]=num*num*num%100;

	#pragma omp parallel for
	for(i=0;i<=num;i++)
		c[i] = a[i] - b[i];
	
	printf("Sum of are\n");
	
	for(i=0;i<num;i++)
		printf("%d ",&c[i]);

	return 0;
}