int _putchar(char c);

/**
 * print_sign - prints the sign of an integer n
 * @n: integer whose sign is printed
 *
 * Return: 0 if n is zero, 1 if n is greater than 0, -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
