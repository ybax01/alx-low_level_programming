#include "main.h"
#include "2-strlen_recursion.c"

int _pldchecker(char *s, int left, int right);

/**
 * is_palindrome - Checks if a string is a palindrome recursively.
 * @s: Pointer to the string
 *
 * Return: 1 palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int l = _strlen_recursion(s);
    return _pldchecker(s, 0, l - 1);
}

/**
 * _pldchecker - Palindrome helper function
 * @s: Pointer to the string.
 * @left: Left index
 * @right: Right index
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int _pldchecker(char *s, int left, int right)
{
    if (left >= right)
        return 1;

    if (s[left] != s[right])
        return 0;

    return _pldchecker(s, left + 1, right - 1);
}
