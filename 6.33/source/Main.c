#include <stdio.h>
#include <stdlib.h>
int Bsearch(int *A, int low, int up, int key);
int main(void)
{
	int array[10] = { 2,6,8,13,25,38,54,66,71,79 };
	printf("%d\n", Bsearch(array, 0, 9, 66));
	system("pause");
	return 0;
}
int Bsearch(int *A, int low, int up, int key)
{
	if (low <= up)
	{
		int mid = low + (up - low) / 2;
		if (key == A[mid])
		{
			return mid;
		}
		else if (key < A[mid])
		{
			return Bsearch(A, low, mid - 1, key);
		}
		else
		{
			return Bsearch(A, mid + 1, up, key);
		}
	}
	else
	{
		return -1;
	}
}