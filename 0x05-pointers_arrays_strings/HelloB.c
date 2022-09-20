#include <stdio.h>

int main()

{
        char s[] = "Hello Bitches";

/**
 * Get length of string
 */
	int i;
	for (i = 0 ; s[i] != '\0' ; i++);
	

/**
 * Reverse the string
 * */
	for (; i >= 0; i--)
		putchar(s[i]);
}
