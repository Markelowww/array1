#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include "main.h"

int main() {
	int64_t size64;
	printf("Enter the size of the array: ");
	scanf("%" SCNd64, &size64);
	if (size64 == 0) {
		printf("None");
		return 0;
	}
	int64_t* myArray = (int64_t*)malloc(sizeof(int64_t) * size64);
	FillArray(size64, myArray);
	int64_t* min = arraIntMin(myArray, size64);
	perform(min);
	free(myArray);
	return 0;
}
