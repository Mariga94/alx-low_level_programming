#ifndef MAIN_H
#define MAIN_H

/**
 * display - prints _putchar to stdout
 *@void - no parameter
 *
 *Return: "putchar" (Success)
 */

char *display(void)
{
	return ("_putchar\n");
}

/**
 * print_alphabet - print lowercase alphabets
 *
 * Return: character
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
		return;
		
}


#endif /*MAIN_H*/
