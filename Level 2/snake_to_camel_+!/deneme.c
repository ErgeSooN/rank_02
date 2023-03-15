#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int letter;

	if (ac == 2)
	{

		while (av[1][i])
		{
			letter = av[1][i];
			if (letter == '_')
			{
				i++;
				letter = av[1][i];
				letter -= 32;
			}
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}