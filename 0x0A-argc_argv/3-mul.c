#include <stdio.h>
#include <stdlib.h>
/**
  * main - Multiplies two numbers,followed by a new line.
  * @argc: The number of arguments supplied to the program.
  * @argv: An array of pointers to the arguments.
  *
  * Return: If the program receives 2 arguments, return 0
  *	if the program does not receive 2 arguments, -1
  */
int main(int argc, char *argv[])
{
	int i, j, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mult = i * j;

	printf("%d\n", mult);

	return (0);
}
