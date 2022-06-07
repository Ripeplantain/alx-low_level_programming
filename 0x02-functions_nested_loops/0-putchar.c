#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		printf("%c", string[i]);

	printf("\n");
}
