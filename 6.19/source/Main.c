#include <stdio.h>
#include <stdio.h>
#include <time.h>
void Throw(int times);
void count(int point1,int point2);
void displayResult(void);
int Point[6][6] = { 0 };
int main(void)
{
	srand(time(0));
	Throw(36000);
	displayResult();
	system("pause");
	return 0;
}
void Throw(int times)
{
	int i;
	int result1,result2;
	for (i = 0; i < times; i++)
	{
		result1 = rand() % 6;
		result2 = rand() % 6;
		count(result1,result2);
	}
}
void count(int point1,int point2)
{
	Point[point1][point2]++;
}
void displayResult(void)
{
	int i;
	printf("%10d%5d%5d%5d%5d%5d\n", 1, 2, 3, 4, 5, 6);
	for (i = 1; i <= 6; i++)
	{
		printf("%5d%5d%5d%5d%5d%5d%5d\n", i, Point[i - 1][0], Point[i - 1][1], Point[i - 1][2], Point[i - 1][3], Point[i - 1][4], Point[i - 1][5]);
	}
}