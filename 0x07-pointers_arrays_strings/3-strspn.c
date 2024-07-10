#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string
 * @accept: the str with stuff to match
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int found;

    while (*s != '\0') {
        found = 0;
        for (char *a = accept; *a != '\0'; a++) {
            if (*s == *a) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            break;
        }
        count++;
        s++;
    }

    return count;
}

