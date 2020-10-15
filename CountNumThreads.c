#include<stdio.h>
#include<omp.h>
int main()
{
	printf("The thread (serial) id is %d\n",omp_get_thread_num());
	#pragma omp parallel
	{
		printf("The thread (parallel) id is %d\n",omp_get_thread_num());
	}
	return 0;
}