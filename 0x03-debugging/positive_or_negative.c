#import "stdio.h"

/**
 * positive_or_negative - tests if integer is positive or negative.
 * @i: int integer variable to be declared.
 * Return: always 0
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%i is positive\n", i);
}
else if (i == 0)
{
printf("%i is zero\n", i);
}
else if (i < 0)
{
printf("%i is negative\n", i);
}
return (0);
}
