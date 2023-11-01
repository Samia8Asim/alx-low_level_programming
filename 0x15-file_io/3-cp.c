#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define NOREAD "Error: Can't read from file %s\n"
#define NOWRITE "Error: Can't write to %s\n"
#define NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - entry point
 * @ac: number of argument
 * @av : list of argument
 *
 * Return: 1 if success, 0 if failuer
 */

int main(int ac, char **av)
{
	int from_fh = 0, to_fh = 0;
	ssize_t bytes;
	char buff[R_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fh = open(av[1], O_RDONLY);
	if (from_fh == -1)
		dprintf(STDERR_FILENO, NOREAD, av[1]), exit(98);
	to_fh = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fh == -1)
		dprintf(STDERR_FILENO, NOWRITE, av[2]), exit(99);

	while ((bytes = read(from_fh, buff, R_BUF_SIZE)) > 0)
		if (write(to_fh, buff, bytes) != bytes)
			dprintf(STDERR_FILENO,  NOWRITE, av[2]), exit(99);
	if (bytes == -1)
		dprintf(STDERR_FILENO, NOREAD, av[1]), exit(98);
	from_fh = close(from_fh);
	to_fh = close(to_fh);
	if (from_fh)
		dprintf(STDERR_FILENO, NOCLOSE, from_fh), exit(100);
	if (to_fh)
		dprintf(STDERR_FILENO, NOCLOSE, to_fh), exit(100);
	return (EXIT_SUCCESS);
}
