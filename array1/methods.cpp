#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

void FillArray(const int64_t& size64, int64_t* myArray)
{
	int64_t element64 = 0;
	for (size_t i = 0; i < size64; i++)
	{
		printf("Fill in the array: ");
		scanf("%" SCNd64, &element64);
		myArray[i] = element64;
	}
}

int64_t* arraIntMin(int64_t* array, size_t size) {
	int64_t* min64 = &array[0];
	for (size_t i = 1; i < size; i++)
	{
		if (array[i] < *min64)
		{
			min64 = &array[i];
		}
	}
	return min64;
}

void perform(int64_t* min64)
{
	printf("Minimum array element = %d", *min64);
}
