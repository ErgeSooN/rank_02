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
			if (av[1][i] == 'z' || av[1][i] == 'Z')
				letter -= 25;
			if ((av[1][i] >= 'A' && av[1][i] < 'Z') || (av[1][i] >= 'a' && av[1][i] < 'z'))
				letter++;
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}