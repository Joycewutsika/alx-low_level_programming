#include "main.h"

/**
 * append_text_to_file - Appends a file
 * @filename: filename
 * @text_content: file content
 *
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, q, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	q = write(p, text_content, len);

	if (p == -1 || q == -1)
		return (-1);

	close(p);

	return (1);
}


