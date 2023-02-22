#include <stdio.h>

/*
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
    int i;  /* loop counter */
    unsigned long int fib1 = 1;  /* first Fibonacci number */
    unsigned long int fib2 = 2;  /* second Fibonacci number */

    printf("%lu, %lu", fib1, fib2);

    for (i = 3; i <= 98; i++) {  /* loop from 3 to 98 */

        unsigned long int nextFib = fib1 + fib2;  /* calculate next Fibonacci number */

        printf(", %lu", nextFib);  /* print it with a comma and space before it */

        fib1 = fib2;  /* update the first and second Fibonacci numbers for the next iteration of the loop */
        fib2 = nextFib;

    }

    printf("\n");  /* print a new line at the end of the output */

    return (0);
}
