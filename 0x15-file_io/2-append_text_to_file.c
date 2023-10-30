#include "main.h"

/**
 * append_text_to_file - ppends text at the end of a file.
 * @filename: the name of input file
 * @text_content: text_content to append to file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fh;
	ssize_t num_bytes = 0, len = strLen(text_content);

	if (!filename)
		return (-1);
	fh = open(filename, O_WRONLY | O_APPEND);
	if (fh == -1)
		return (-1);
	if (len)
		num_bytes = write(fh, text_content, len);
	close(fh);
	return (num_bytes == len ? 1 : -1);
}
