int _putchar(char c);

/**
 * main - Program entry
 *
 * Return: 0 on succeful execution
 */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (word[i] != '0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
