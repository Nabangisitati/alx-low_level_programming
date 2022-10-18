#include <stdio.h>
/**
 *main - Entry point
 *Program prints out the sizes of different type
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int j;
	long long int k;
	float u;

	printf("Size of a char:%dbyte(s)\n", sizeof(char));
	printf("Size of an int:%d byte(s)\n", sizeof(i));
	printf("Size of a long int:%d byte(s)\n", sizeof(j));
	printf("Size of a long long int:%d byte(s)\n", sizeof(k));
	printf("Size of a float:%d byte(s)\n", sizeof(u));
	return (0);
}
