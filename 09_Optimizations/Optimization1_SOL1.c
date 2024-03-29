#include <stdlib.h>
#include <stdio.h>
#include "Benchmarker.h"

/*
	Solution 1: Being clever and including the result of the modulus operation in the calculation.
*/


int main()
{
	StartBenchmarking();

	long long result = 0;
	for (size_t i = 0; i < 100000000; ++i)
	{
		result += 2 * (rand() % 2) - 1;
	}
	printf("The result is: %lld\n", result);

	StopBenchmarking();

	return EXIT_SUCCESS;
}