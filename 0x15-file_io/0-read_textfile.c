#include "main.h"

/**
 * read_textfile - prints the text file it reads and prints it the output
 * @filename: self-explanatory
 * @letters: num of letters to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        int fd;
        ssize_t r_count, w_count;
        char *buffer;

        if (filename == NULL)
                return (0);

        buffer = malloc(letters);
        if (buffer == NULL)
                return (0);

        fd = open(filename, O_RDONLY);
        if (fd == -1)
        {
                free(buffer);
                return (0);
        }

        r_count = read(fd, buffer, letters);
        if (r_count == -1)
        {
                close(fd);
                free(buffer);
                return (0);
        }

        w_count = write(STDOUT_FILENO, buffer, r_count);
        if (w_count == -1 || w_count != r_count)
        {
                close(fd);
                free(buffer);
                return (0);
        }

        close(fd);
        free(buffer);
        return (r_count);
}
