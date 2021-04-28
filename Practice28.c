// program for summary of results
#include <stdio.h>
int main()
{
	int pass = 0, fail = 0;
	float count = 1;
	int score;

	for (count = 1; count <= 12; count++)
	{
		printf("enter score");
		scanf("%d", &score);
		if (score == 1)
		{
			pass++;
		}
		else
		{
			fail++;
		}
	}
	printf(" %d Passed\n", pass);
	printf("%d Failed\n", fail);

	if (pass >= 8)
	{ //If Statement
		printf("Bonus to Instructor");
	}
}
