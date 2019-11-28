#include <stdio.h>
#include <stdlib.h>
int findMaximum(int[], int);

int main() {
	int c, array[100], size, location, maximum;

	printf("Input number of elements in array:");
	scanf_s("%d", &size);

	printf("Enter %d integers:", size);

	for (c = 0; c < size; c++)
	{
		scanf_s("%d", &array[c]);
	}

	location = findMaximum(array, size);
	maximum = array[location];

	printf("Maximum value = %d.\n", location + 1, maximum);
	system("pause");
	return 0;
}

int findMaximum(int a[], int n) 
{
	int c, max, index;

	max = a[0];
	index = 0;

	for (c = 1; c < n; c++) 
	{
		if (a[c] > max)
		{
			index = c;
			max = a[c];
		}
	}

	return index;
}