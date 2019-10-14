#include<stdio.h>
#include<omp.h>
int main()
{
	printf("OUTSIDE PARALLEL\n");
	if(omp_is_parallel())
	{
		printf("Function is parallel.\n");
	}
	else
		printf("Function is not parallel.\n");
	printf("INSIDE PARALLEL\n");
	#pragma omp parallel
	{
		if(omp_is_parallel())
		{
			printf("Function is parallel.\n");
		}
		else
		{
			printf("Function is not parallel.\n");
		}
	}
	return 0;
}