#include "main.h"

/**
*main - program that copies the content of a file to another file.
*@argc: argc
*@argv: argv
*Return: 0
*/
int main(int argc, char *argv[])
{
	int origin = 0, tof = 0;
	int lenr = 0, lenw = 0, cvar = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	origin = open(argv[1], O_RDONLY);
	if (origin == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	tof = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tof == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((lenr = read(origin, buffer, 1024)) != 0)
	{
		if (lenr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		lenw = write(tof, buffer, lenr);
		if (lenw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	cvar = close(origin);
	if (cvar == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", origin), exit(100);
	cvar = close(tof);
	if (cvar == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tof), exit(100);
	return (0);
}
