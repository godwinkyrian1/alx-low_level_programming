#include <stdio.h>

/**
 *main -entry
 *Description: 'prints the alphabet'
 *Return: Always 0 (success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
	putchar(alp[i]);
}
putchar('\n');
return (0);
}
