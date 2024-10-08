#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with specific permissions and writes text to it
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_count, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		w_count = write(fd, text_content, length);
		if (w_count == -1 || w_count != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

