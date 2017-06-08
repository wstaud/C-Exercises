#include <stdio.h>
int sizeTest(void)
{
	float singlePrecision = 2.2;
	double doublePrecision = 3.3;

	printf("Size of float is %d \n", sizeof(singlePrecision));
	printf("Size of double is %d \n", sizeof(doublePrecision));

	return 0;
}