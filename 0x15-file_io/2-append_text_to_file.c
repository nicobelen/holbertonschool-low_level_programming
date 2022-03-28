#include "main.h"

/**
* append_text_to_file - append text at the end of file
* @filename: Archive
* @text_content: text to append
* Return: 1 on succes and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int n, _write;

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

	_write = write(n, text_content, strlen(text_content));

	if (_write == -1)
		return (-1);

	close(n);

	return (1);
}
