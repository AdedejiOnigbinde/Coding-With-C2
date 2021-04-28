// input grade of 5 students
#include <stdio.h>
int main()
{
   float count, grade, sum, avg;
   sum = 0;
   for (count = 0; count < 40; count++)
   {
      printf("grade of student is \n");
      scanf("%f", &grade);
      sum = sum + grade;
   }
   avg = sum / 40;
   printf("the sum is %f", sum);
   printf("the average is %f", avg);

   return 0;
}
