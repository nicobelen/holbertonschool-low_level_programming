#include "main.h"

/**
* append_text - append text at the end of file
* @filename: Archive
* @text_content: text to append
* Return: 1 on succes and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int n;

	n = open(filename, O_RDWR | O_APPEND, 0600);

	if (filename == NULL)
	{
		close(n);
		return (-1);
	}

	if (text_content == NULL)
	{
		close(n);
		return (-1);
	}

	if (n == -1)
		return (-1);

	write(n, text_content, strlen(text_content));

	close(n);

	return (1);
}
