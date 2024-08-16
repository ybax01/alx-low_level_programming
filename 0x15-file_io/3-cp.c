#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

void close_file(int fd);
void error_exit(const char *msg, const char *filename, int code);

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, or exits with an error code.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r_count, w_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", NULL, 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		error_exit("Error: Can't write to", argv[2], 99);
	}

	while ((r_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_count = write(fd_to, buffer, r_count);
		if (w_count == -1 || w_count != r_count)
		{
			close_file(fd_from);
			close_file(fd_to);
			error_exit("Error: Can't write to", argv[2], 99);
		}
	}

	if (r_count == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		error_exit("Error: Can't read from file", argv[1], 98);
	}

	close_file(fd_from);
	close_file(fd_to);
	return (0);
}

/**
 * close_file - Closes a file descriptor and checks for errors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	int result;

	result = close(fd);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_exit - Prints an error message and exits with a specific code.
 * @msg: The error message to print.
 * @filename: The filename associated with the error, if any.
 * @code: The exit code.
 */
void error_exit(const char *msg, const char *filename, int code)
{
	if (filename)
		dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);

	exit(code);
}

