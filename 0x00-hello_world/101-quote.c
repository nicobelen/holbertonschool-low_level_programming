#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(int argc, char **argv)
{
	write("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (0);
}
