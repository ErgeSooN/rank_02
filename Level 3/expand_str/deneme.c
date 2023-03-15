#include <unistd.h>

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;

		while ((av[1][i] == 32 || av[1][i] == 9) && av[1][i]) // bastaki boslukları kaldırdık
			i++;
		while (av[1][i])
		{
			while ((av[1][i] != 32 && av[1][i] != 9) && av[1][i])//kelimeleri yazdırma bölümü
				write(1, &av[1][i++], 1);
			while ((av[1][i] == 32 || av[1][i] == 9) && av[1][i]) // boslukları kaldırdık
				i++;
			if ((av[1][i - 1] == 32 || av[1][i - 1] == 9) && av[1][i])
				write(1, "   ", 3);
		}
		
		
	}
	write(1, "\n", 1);
	return(0);
}
