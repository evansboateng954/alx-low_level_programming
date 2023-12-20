#include "main.h"
#include <stdio.h>
#include <fcntl.h>
/**
 * read_textfile - reads a textfile and prints to posix stdout
 * @filename: The file to be read
 * @letters: the number of letters to read and print
 * Return: the number of letters read and printed or
 * if the file cannot be opened return 0 or if
 * write fails or filename equals NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t fd;
	ssize_t i = 0;
	ssize_t rd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);
	ch = malloc(letters);

	if (!ch)
	{
		close(fd);
		return (0);
	}

	rd = read(STDIN_FILENO, ch, letters);
	if (rd < 0)
	{
		free(ch);
		close(fd);
	}

/* write a character at a time */

	while ((fd = write(STDIN_FILENO, &ch[i], 1)) > 0)
	{
		i++;
		if (fd < 0)
		{
			free(ch);
			close(fd);
			return (0);
		}
	}
	free(ch);
	return (i);
}


