#include <stdio.h>
/**
 * main - Printing the size of various computer types
 * Return 0
 */
int main(void)
{
	char c;
	int a;
	long int l1;
	long long int l2;
	float f1;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l1));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l2));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f1));
return (0);
}
