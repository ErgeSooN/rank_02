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
				letter = 155 - letter;
			else if (letter >= 'a' && letter <= 'z')
				letter = 219 - letter;
			write(1,  &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}