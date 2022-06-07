#include "main.h"
/**
 * main - print out main character by char.
 * Description: uses the main header file
 * that contains the function _putchar
 * Return: 0.
 */

int main(void)
{
	int i;
	char string[] = "_putchar";

	for (i = 0; i < strlen(string); i++)
		_putchar(string[i]);

	_putchar("\n");
}
