//program for average age of UTME candidates
#include <stdio.h>
int main()
{
	int count, age, sum, average;
	sum = 0;
	for (count = 0; count < 3; count++)
	{
		printf("enter your age\n", age);
		scanf("%d", &age);
		sum = sum + age;
	}
	average = sum / 3;
	printf("sum of ages is %d\n", sum);
	printf("average age is %d\n", average);

	return 0;
}
