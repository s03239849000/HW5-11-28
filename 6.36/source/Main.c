#include <stdio.h>
#include <stdlib.h>
int i, size;
int main(void)
{
	char string[20], tmp;
	printf("Enter a string: ");
	scanf_s("%s", &string, 19);
	for (i = 0; i < 20; i++)
	{
		if (string[i] > 0)
		{
			size++;
		}
	}
	for (i = 0; i<size; i++)
	{
		printf("%c", string[size-i-1]);
	}
	printf("\n");
	system("pause");
	return 0;
}