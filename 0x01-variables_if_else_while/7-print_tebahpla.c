#include <stdio.h>

/**
 * main-entry
 * Description:'prints reversed alphabets'
 * Return:Always 0 (success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopuqxd";	
int i;

for (i = 122; i < 96; i--)
{
	putchar(alp[i]);
}
putchar('\n');
return (0);
}
