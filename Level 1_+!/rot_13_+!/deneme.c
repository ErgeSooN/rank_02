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

			if ((letter >= 'A' && letter <= 'M') || (letter >= 'a' && letter <= 'm'))
				letter += 13;
			else if ((letter >= 'N' && letter <= 'Z') || (letter >= 'n' && letter <= 'z'))
				letter -= 13;
			write(1, &letter, 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}