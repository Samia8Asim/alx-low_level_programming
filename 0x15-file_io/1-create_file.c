#include "main.h"

/**
 * strLen - function to find string length
 * @str: input string
 *
 * Return: the length os a string
 */
int strLen(char *str)
{
	int len = 0;

	if (!str)
		return (0);
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * create_file - function that creates a file.
 * @filename: the name of the file
 * @text_content: text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fh;
	ssize_t num_bytes = 0, len = strLen(text_content);

	if (!filename)
		return (-1);
	fh = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fh == -1)
		return (-1);
	if (len)
		num_bytes = write(fh, text_content, len);
	close(fh);
	return (num_bytes == len ? 1 : -1);
}
