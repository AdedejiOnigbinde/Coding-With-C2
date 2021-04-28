// funtion
#include <stdio.h>
int addition(int a, int b); // funtion program

int main()
{
	int x, y;
	printf("input your values");
	scanf("%d%d", &x, &y);
	printf("the sum is %d", addition(x, y));
	return 0;
}

int addition(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}
