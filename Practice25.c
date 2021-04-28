//Program for fruit store receit
#include <stdio.h>
int main()
{
	int orange, lemon, orgb, lemb, amntp, amnto, totalcost;
	orange = 1;
	lemon = 2;

	printf("number of oranges bought\n", orgb);
	scanf("%d", &orgb);

	printf("number of lemons bought\n", lemb);
	scanf("%d", &lemb);

	printf("amount paid\n", amntp);
	scanf("%d", &amntp);

	totalcost = (orgb * orange) + (lemb * lemon);
	amnto = totalcost - amntp;

	printf("total cost is %d\n", totalcost);

	printf("amount paided %d\n", amntp);

	printf("amount owed %d\n", amnto);

	return 0;
}
