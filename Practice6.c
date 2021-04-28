#include <stdio.h>
int main(void)
{
	int dnum = 1234;

	int firstnum = (dnum / 1000) % 10;
	int secnum = (dnum / 100) % 10;
	int thirdnum = (dnum / 10) % 10;
	int lastnum = (dnum / 1) % 10;

	printf("%d....%d....%d....%d", firstnum, secnum, thirdnum, lastnum);

	return 0;
}
