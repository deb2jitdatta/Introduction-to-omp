#include<stdio.h>
#include<omp.h>
int main()
{
	omp_set_num_threads(5);
	#pragma omp parallel
	{
		printf("The number of current threads are %d.\n",omp_get_num_threads());
	}
	return 0;
}