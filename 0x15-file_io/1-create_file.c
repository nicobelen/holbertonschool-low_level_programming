#include "main.h"

/**
* create_file - creates a file
* @filename: Archivo
* @text_content: Text
* Return: 1 on succes, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int n;

	n = open(filename, O_TRUNC | O_CREAT | O_RDWR, 0600);

	if (text_content == NULL)
		text_content = "";

	if (filename == NULL)
		return (-1);

	if (n == -1)
		return (-1);

	write(n, text_content, strlen(text_content));

	close(n);

	return (1);
}
