#include <stdio.h>
int main()
{
	int firstnumber = 0;
	int secnumber = 0;

	puts("please enter a number greater than 0");
	scanf("%d", &firstnumber);

	puts("please enter a number greater than 0");
	scanf("%d", secnumber);

	if (firstnumber > 0 && secnumber > 0)
	{
		puts("Awsome!");
	}
	else
	{
		puts("you are wrong");
	}
	return 0;
}
