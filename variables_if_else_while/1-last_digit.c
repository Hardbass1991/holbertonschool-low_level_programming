#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Gets the last digit of a random number and prints it out
 *
 * Return: 0
 */
int main(void)
{
	int n, last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 10 &&  n > -10)
		last_dig = n;
	else
		last_dig = n % 10;
	if (last_dig  == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_dig);
	else if (last_dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);

	return (0);
}
