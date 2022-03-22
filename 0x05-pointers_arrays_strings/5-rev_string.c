#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
        int i, start, end, length;
        int rev_str;

        while (s[length] != '\0')
        {
                length++;
        }

        end =  length - 1;

        for (start = 0; start < length; start++)
        {
                rev_str = s[end];
                end--;
        }
}

