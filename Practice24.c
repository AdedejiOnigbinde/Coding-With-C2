// program to test while loop
#include <stdio.h>
int main()
{
	printf("input student score \n");
	int count = 1;
	int score, sum;
	while (count <= 10)
	{
		printf("%d.", count);
		scanf("%d", &score);
		printf("\n");
		count = count + 1;
		sum = sum + score;
	}
	printf("the sum is", sum);

	return 0;
}
