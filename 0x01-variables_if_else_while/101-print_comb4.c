#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits.
 *
 * Return: Always 0.
 */
int main(void)
{
        int kan, meji, meta;

        for (kan = 0; kan < 8; kan++)
        {
                for (meji = kan + 1; meji < 9; meji++)
                {
                        for (meta = meji + 1; meta < 10; meta++)
                        {
                                putchar((kan % 10) + '0');
                                putchar((meji % 10) + '0');
                                putchar((meta % 10) + '0');

                                if (kan == 7 && meji == 8 && meta == 9)
                                        continue;

                                putchar(',');
                                putchar(' ');
                        }
                }
        }
	putchar('\n');

        return (0);
}

