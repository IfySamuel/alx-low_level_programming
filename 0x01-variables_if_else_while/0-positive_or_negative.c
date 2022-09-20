<<<<<<< HEAD

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
	}
	else if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
=======
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* print if the number is postive, zero, or negative
*
*Description: using the main function









>>>>>>> cb3d9fbd4e670f080a20782cf0bf7d3771d7cc0e
