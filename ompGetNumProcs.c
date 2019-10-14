#include<stdio.h>
#include<omp.h>
int main()
{
	printf("the max number of processors are %d",omp_get_num_procs());
	return 0;
}