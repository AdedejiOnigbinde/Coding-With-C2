
#include <stdio.h>

int main()
{
	int lemons, oranges, payment, L2, O2, T1;
	int pin1, paid, owing, paid2, owing2, owing3;
	const L1 = 120, O1 = 120, paid3 = 0;

	printf("Notice: Cost of one lemon = #120,\n \tCost of one orange = #120. \n \tThank you.");
	printf("\nEnter amount of lemons you want to buy: ");
	scanf("%d", &lemons);
	printf("\nEnter amount of oranges you want to buy: ");
	scanf("%d", &oranges);

	L2 = (L1 * lemons);
	O2 = (O1 * oranges);

	printf("\nPrice of lemons bought is #%d", L2);
	printf("\nPrice of oranges bought is #%d", O2);

	T1 = L2 + O2;
	printf("\nTotal cost of lemons and oranges bought is #%d", T1);

Errorhandler10:
	printf("\n\nNotice: Enter 1 for full payment, 2 for part payment and 3 to buy on credit");
	printf("\nEnter payment method: ");
	scanf("%d", &payment);

	if (payment == 1)
	{
		printf("\nPlease insert ATM card into pos machine");
	Errorhandler1:
		printf("\nInsert pin: ");
		scanf("%d", &pin1);
		if (pin1 <= 9999)
		{
			printf("Printing out receipt.");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			printf(".");
			paid = T1;
			owing = paid - T1;

			printf("\n\t\t\t\t\t RECEIPT");
			printf("\n \t\t\tCHINEME STORE.NG\n \t\t\t16 BECO STREET\n \t\t\tIKEJA\n \t\t\tLAGOS\n \t\t\t98812");
			printf("\n \t\t\t______________________________________________");
			printf("\n \t\t\tCASHIER: #1738");
			printf("\n \t\t\tCUSTOMER: VIP");
			printf("\n \t\t\t______________________________________________");
			printf("\n \t\t\tPURCHASE:");
			printf("\n\n \t\t\tITEM             QUANTITY           PRICE");
			printf("\n \t\t\tLEMON              %d                #%d\n", lemons, L2);
			printf("\n \t\t\tORANGES            %d                #%d\n", oranges, O2);
			printf("\n \t\t\t______________________________________________");
			printf("\n \t\t\t                             TOTAL: #%d", T1);
			printf("\n \t\t\tAMOUNT PAID                         #%d", paid);
			printf("\n \t\t\tAMOUNT OWING                        #%d", owing);
			printf("\n\n \t\t\t               THANK YOU              ");
		}
		else if (pin1 <= 999)
		{
			printf("\ninvalid pin\n");
			goto Errorhandler1;
		}
		else
		{
			printf("\ninvalid pin\n");
			goto Errorhandler1;
			return 0;
		}
	}
	else if (payment == 2)
	{
		printf("\nEnter amount to pay: #");
		scanf("%d", &paid2);
		owing2 = T1 - paid2;
		printf("\nPlease insert ATM card into pos machine");
	Errorhandler2:
		printf("\nInsert pin: ");
		scanf("%d", &pin1);
		if (pin1 <= 9999)
		{
			printf("Printing out receipt.");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			printf(".");

			printf("\n\t\t\t\t\tRECEIPT");
			printf("\n \t\t\tCHINEME STORE.NG\n \t\t\t16 BECO STREET\n \t\t\tIKEJA\n \t\t\tLAGOS\n \t\t\t98812");
			printf("\n \t\t\t______________________________________________");
			printf("\n \t\t\tCASHIER: #1738");
			printf("\n \t\t\tCUSTOMER: VIP");
			printf("\n \t\t\t______________________________________________");
			printf("\n \t\t\tPURCHASE:");
			printf("\n\n \t\t\tITEM             QUANTITY           PRICE");
			printf("\n \t\t\tLEMON              %d                #%d\n", lemons, L2);
			printf("\n \t\t\tORANGES            %d                #%d\n", oranges, O2);
			printf("\n \t\t\t______________________________________________");
			printf("\n \t\t\t                             TOTAL: #%d", T1);
			printf("\n \t\t\tAMOUNT PAID                         #%d", paid2);
			printf("\n \t\t\tAMOUNT OWING                        #%d", owing2);
			printf("\n\n \t\t\t               THANK YOU              ");
		}
		else
		{
			printf("invalid pin");
			goto Errorhandler2;
		}
	}
	else if (payment == 3)
	{
		printf("\nPlease insert ATM card into pos machine");
	Errorhandler3:
		printf("\nInsert pin: ");
		scanf("%d", &pin1);
		if (pin1 <= 9999)
		{
			printf("Printing out receipt.");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			printf(".");

			owing3 = T1 - paid3;

			printf("\n\t\t\t\t\tRECEIPT");
			printf("\n \t\t\tCHINEME STORE.NG\n \t\t\t16 BECO STREET\n \t\t\tIKEJA\n \t\t\tLAGOS\n \t\t\t98812");
			printf("\n \t\t\t______________________________________________");
			printf("\n \t\t\tCASHIER: #1738");
			printf("\n \t\t\tCUSTOMER: VIP");
			printf("\n \t\t\t______________________________________________");
			printf("\n \t\t\tPURCHASE:");
			printf("\n\n \t\t\tITEM             QUANTITY           PRICE");
			printf("\n \t\t\tLEMON              %d                #%d\n", lemons, L2);
			printf("\n \t\t\tORANGES            %d                #%d\n", oranges, O2);
			printf("\n \t\t\t______________________________________________");
			printf("\n \t\t\t                             TOTAL: #%d", T1);
			printf("\n \t\t\tAMOUNT PAID                         #%c", paid3);
			printf("\n \t\t\tAMOUNT OWING                        #%d", owing3);
			printf("\n\n \t\t\t               THANK YOU              ");
		}
		else
		{
			printf("\ninvalid pin");
			goto Errorhandler3;
		}
	}

	else
	{
		printf("\nSorry invalid option please try again.");
		goto Errorhandler10;
	}
	return 0;
}
