// program for organization employment
#include <stdio.h>
int main()
{

	int experience, age, grademath, gradeeng, gradedata, sittings, licence, gender, degree;
	printf("welcome to my fried chicken org\n");

	printf("input licence status put 1 for yes and 2 for no\n");
	scanf("%d", &licence);
	if (licence == 1)
	{

		printf("input age\n");
		scanf("%d", &age);
		if (age >= 25)
		{

			printf("input years of experience\n");
			scanf("%d", &experience);
			if (experience >= 2)
			{

				printf("enter number of ssce sittings\n");
				scanf("%d", &sittings);
				if (sittings == 1)
				{

					printf("input gender, put 3 for female 2 for male\n");
					scanf("%d", &gender);

					printf("input grade in math\n");
					scanf("%d", &grademath);
					if (grademath > 50)
					{

						printf("input grade in english\n");
						scanf("%d", &gradeeng);
						if (gradeeng >= 50)
						{

							printf("input grade in data processing\n");
							scanf("%d", &gradedata);
							if (gradedata >= 50)
							{

								printf("enter degree put 5 for bsc and 6 for other/n");
								scanf("%d", &degree);
								if (degree == 5)
								{
									printf("you are qualified for the job please await your letter of employment happy frying");
								}
								else
									printf("not qualified");
							}
							else
								printf("not qualified");
						}
						else
							printf("not qualified");
					}
					else
						printf("not qualified");
				}
				else
					printf("not qualified");
			}
			else
				printf("you are not welcome");
		}
		else
			printf("you are not of age");
	}
	else
		printf("sorry we dont take your kind here");

	return 0;
}
