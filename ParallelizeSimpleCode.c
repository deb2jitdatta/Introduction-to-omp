#include<stdio.h>
#include<omp.h>
int main()
{
	int i, num;
	int sum = 0;

	printf("Enter number: ");
	scanf("%d",&num);

	int a[num], b[num], c[num];

	for(i=0;i<num;i++)
		scanf("%d",&a[i]);

	for(i=0;i<num;i++)
		scanf("%d",&b[i]);

	#pragma omp parallel for
	for(i=0;i<=num;i++)
		c[i] = a[i] + b[i];
	
	printf("Sum of are\n");
	
	for(i=0;i<num;i++)
		printf(“%d ”,&c[i]);

	return 0;
}