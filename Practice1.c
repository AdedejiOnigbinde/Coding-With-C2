//babcock grading system

#include <stdio.h>

int main()
{
	int score, continue;
	printf("input your grade");
	scanf("%d", &score);

	//compound if
	if (score > 80)
		printf("A");
	else if (score >= 60)
		printf("B");
	else if (score >= 50)
		printf("C");
	else if (score >= 45)
		printf("D");
	else if (score >= 40)
		printf("E");
	else if (score <= 39)
		printf("F");
	else if (score < 0)
		printf("input correct score");

	printf("press 1 to continue and 0 to stop");
	scanf("%d", &continue);
	if (continue == 1)
		goto start;
	return 0;
}
