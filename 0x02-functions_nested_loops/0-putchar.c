#include "main.h"
 /**
  * main - This code prints string _putchar followed by a newline
  * Return: 0 (Success)
  */

int main(void)
{
char c[] = "_putchar";
int i;
for (i = 0 ; i < 8 ; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
