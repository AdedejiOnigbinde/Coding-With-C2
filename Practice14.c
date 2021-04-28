// program to display ages in years to days
#include <stdio.h>
int main()
{
	int age, days;
	printf("please enter your age");
	scanf("%d", &age);
	days = age * 360;
	printf("your age is days is %d", days);
	return 0;
}
