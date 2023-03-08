#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{	
		int i = 0;
		int letter;

		while (av[1][i])
		{
			letter = av[1][i];
			if (letter >= 'A' && letter <= 'Z')
			{
				while (letter >= 'A')
				{
					write(1, &av[1][i], 1);
					letter--;
				}
			}
			else if (letter >= 'a' && letter <= 'z')
			{
				while (letter >= 'a')
				{
					write(1, &av[1][i], 1);
					letter--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	
	}
	write(1, "\n", 1);
	return (0);
}