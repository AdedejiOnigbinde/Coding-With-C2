//program to compare the sum of two numbers to 100
#include <stdio.h>
int main()
{
	int num1, num2, sum;
	printf("enter first number \n");
	scanf("%d", &num1);
	printf("enter second number \n");
	scanf("%d", &num2);
	sum = num1 + num2;
	printf("sum of two numbers is %d", sum);

	if (sum > 100)
	{
		puts("which is greater than 100\n");
	}
	else if (sum < 100)
		puts("which is less than 100\n");
	return 0;
}
