#include "main.h"

/**
 * main -main block
 *print_alphabe  -prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}

