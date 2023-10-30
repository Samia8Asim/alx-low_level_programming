#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX stdo.
 * @filename: name of the file inputted
 * @letters: number of bytes inside file
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fh;
	ssize_t num_bytes;
	char buffer[R_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fh = open(filename, O_RDONLY);
	if (fh == -1)
		return (0);
	num_bytes = read(fh, &buffer[0], letters);
	num_bytes = write(STDOUT_FILENO, &buffer, num_bytes);
	close(fh);
	return (num_bytes);
}
