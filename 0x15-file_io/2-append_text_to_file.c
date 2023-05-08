#include "main.h"

/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, p, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	p = open(filename, O_WRONLY | O_APPEND);
	f = write(p, text_content, len);

	if (p == -1 || f == -1)
	{
		return (-1);
	}
	close(p);
	return (1);
}
