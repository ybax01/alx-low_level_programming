#include "main.h"

/**
 * read_textfile - prints the text file it reads and prints it the output
 * @filename: self-explanatory
 * @letters: num of letters to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        int fo;
        ssize_t rcount, wcount;
        char *buffer;

        if (filename == NULL)
                return (0);

        buffer = malloc(letters);
        if (buffer = NULL)
                return (0);

        fd = open(filename, O_RDONLY);
        if (fd == -1)
        {
                free(buffer);
                return (0);
        }

        rcount = read(fd, buffer, letters);
        if (rcount == -1)
        {
                close(fd);
                free(buffer);
                return (0);
        }

        write_count = write(STDOUT_FILENO, buffer, read_count);
        if (write_count == -1 || write_count != read_count)
        {
                close(fd);
                free(buffer);
                return (0);
        }

        close(fd);
        free(buffer);
        return (read_count);
}
