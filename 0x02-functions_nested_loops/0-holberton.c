#include "main.h"

/**
 *main- prints Holberton, followed by a new line
 *Return:always 0 (Success)
 */
int main(void)
{
int i = 0;
char msg[] = "Holberton";
char c;
while (i < 9)
{
c = msg[i];
_putchar(c);
i++;
}
_putchar('\n');
return (0);
}
