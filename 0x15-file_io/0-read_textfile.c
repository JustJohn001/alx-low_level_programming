#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file print it to the standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: 0 if filename is NULL, 
 * act (the actual number of bytes read and printed)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t act;
	ssize_t z;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	z = read(fd, buf, letters);
	act = write(STDOUT_FILENO, buf, z);

	free(buf);
	close(fd);
	return (act);
}
