#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>


/*
	Task:
		a) Approximate the stack size experimentally by causing a stack overflow.
		b) Check the approximation with the actual stack limit.
*/



int main()
{
	for (size_t i = 0; i < 1.0e8; i += .25e5)
	{
		int array[i];
		printf("no stack overflow for kB: %lu\n", i * 4 / 1000);
	}

	struct rlimit stackSize;
	getrlimit (RLIMIT_STACK, &stackSize);
	printf ("Actual stack size in kB = %ld\n", stackSize.rlim_cur / 1000);
	
	return EXIT_SUCCESS;
}