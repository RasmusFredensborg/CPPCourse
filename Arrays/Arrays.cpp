// Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int numbers[] = {1,2,3,5,6,7,8,9};
	

	printf("sizeof: %i\n",sizeof(numbers));
	printf("sizeof pointer: %i\n", sizeof(*numbers));
	printf("size: %i\n", sizeof(numbers)/sizeof(*numbers));

	int numbersSize = sizeof(numbers) / sizeof(*numbers);

	for (int i = 0; i < numbersSize; i++)
	{
		printf("Element %d of array: %d\n",i,numbers[i]);
	}

	int* pointer_test = numbers;

	while(*pointer_test)
	{
		printf("%d",*pointer_test);
		pointer_test++;
	}
    return 0;
}

