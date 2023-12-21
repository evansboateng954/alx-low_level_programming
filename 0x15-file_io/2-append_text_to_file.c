#include "main.h"
/**
 * append_text_to_file - appends a text to a file
 * @filename: the name of the file to append text
 * @text_content: the text to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int wd;

	if (!filename)
		return (-1);
	
	if (!text_content)
		return (1);

	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);


	for (i = 0; text_content[i] != 0; i++)
	{
		wd = write(fd, &text_content[i], 1);
		if (wd == -1)
			return (-1);
	}
	return (1);
}
