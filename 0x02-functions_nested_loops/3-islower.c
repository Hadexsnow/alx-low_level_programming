#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
    // If c is between 'a' and 'z', it's lowercase!
    return (c >= 'a' && c <= 'z');
}

