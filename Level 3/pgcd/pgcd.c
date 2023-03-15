#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int num1 = atoi(av[1]);
	int num2 = atoi(av[2]);
	int num3;

	if (num1 <= 0 || num2 <= 0)
		return (0);

	while (num2 != 0)
	{
		num3 = num2;
		num2 = num1 % num2;
		num1 = num3;
	}
	printf("%d\n", num1);
	return(num1);
}