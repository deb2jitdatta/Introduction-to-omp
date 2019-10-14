#include<stdio.h>
#include<omp.h>
int main()
{
	printf("The number of current threads (Serial) are %d.\n", omp_get_num_threads());
	#pragma omp parallel
	{
		printf("The number of current threads (parallel) are %d.\n", omp_get_num_threads());
	}
	return 0;
}