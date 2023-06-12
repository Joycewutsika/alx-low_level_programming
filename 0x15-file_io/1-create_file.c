#include "main.h"

/**
  *create_file - creates a file
  *@filename: name of file
  *@text_content: content of the file
  *
  *Return: 1 (success), -1 (failure)
  */
int create_file(const char *filename, char *text_content)
{
	int fm, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fm = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	x = write(fm, text_content, len);

	if (fm == -1 || x == -1)
		return (-1);

	close(fm);

	return (1);
}
