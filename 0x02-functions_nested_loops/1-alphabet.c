int _putchar(char c);

/**
 * print_alphabet - prints the alphabet in lowercase using putchar()
 *
 * Return: does not return anything on  succesful calling
 */
void print_alphabet(void)
{
	int i = 97;

	/*Using ASCII Code to print lowercase alphabet*/
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
}
