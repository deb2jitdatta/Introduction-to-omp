#include<stdio.h>
#include<omp.h>
int main()
{
	printf("The number of maximum threads are %d",omp_get_max_threads());
	return 0;
}