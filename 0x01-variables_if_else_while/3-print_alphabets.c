#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int azAZ;

	for (azAZ = 'a'; azAZ <= 'z'; azAZ++)
		putchar(azAZ);
	for (azAZ = 'A'; azAZ <= 'Z'; azAZ++)
		putchar(azAZ);
	putchar('\n');
	return (0);
}
