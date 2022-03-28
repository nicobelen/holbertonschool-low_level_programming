#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: Archivo
* @letters: Number of letters that should read and print
* Return: Text
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _open, _read, _write;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buff == NULL)
		return (0);

	_open = open(filename, O_RDONLY);
	_read = read(_open, buff, letters);
	_write = write(STDOUT_FILENO, buff, _read);

	if (_open == -1 || _read == -1 || _write == -1 || _write != _read)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(_open);

	return (_write);
}
