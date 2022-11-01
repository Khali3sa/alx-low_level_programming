#include "main.h"
/**
 * _memset: fills memory with constant byte 
 * @s: memory area
 * @b: bytes
 * @n: number of bytes
 * Return: ponlinter to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
