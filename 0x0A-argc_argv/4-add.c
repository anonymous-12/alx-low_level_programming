#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints the addition of positive numbers
  * @argc: The number of arguments supplied to the program
  * @argv: An array of pointers to the arguments
  *
  * Return: 1 If one of the number contains symbols that are not digits,
  *	print Error
  */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
