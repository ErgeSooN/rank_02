#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	int i = 2;

	if(n == 0)
		return (1);
	while (i <= n)
	{
		if (n == i)
			return (1);
		i = i * 2;
	}
	return (0);
}

int main()
{
	int i = 4;

	printf("%u", is_power_of_2(i));

}