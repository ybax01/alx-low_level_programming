#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *   Prints all lowercase letters of the English alphabet
 *   except 'q' and 'e', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
        letter++;
    }
    putchar('\n');

    return (0);
}
