#include "palindrome.h"
/**
 * is_palindrome - check if a unsigned long int is a palindrome
 * @n: unsigned long int
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(unsigned long n)
{
    unsigned long temp = n;
    unsigned long reverseNumber = 0;
    unsigned long rem = 0;

    while (temp != 0)
    {
        rem = temp % 10;
        reverseNumber = reverseNumber * 10 + rem;
        temp = temp / 10;
    }
    if (n == reverseNumber)
        return 1;
    return 0;
}