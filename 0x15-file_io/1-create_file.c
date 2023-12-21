#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to creat
 * @text_content: content of the file (string)
 * Return: 1 on success and  -1 on failure
 * if filename is NULL return -1
 * Description: if the file already exist, truncate it
 * if text_content is null create an empty file
 * the file must have the permissions rw-------
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int wd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);

	if (fd < 0)
		return (-1);


	if (*text_content == '\0')
		close(fd);
	else
		for (i = 0; text_content[i] != 0; i++)
		{
			wd = write(fd, &text_content[i], 1);
			if (wd < 0)
				return (-1);
		}
	return (1);
}
