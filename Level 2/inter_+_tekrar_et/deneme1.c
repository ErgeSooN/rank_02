#include <unistd.h>

int iter(char *str, char s, int len)
{
	int i = 0;
	while(str[i] && (len > i || len == -5))
	{
		if (str[i] == s)
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		while (av[1][i])
		{
			if(!iter(av[1],av[1][i], i) && iter(av[2],av[1][i], -5))
				write(1, &av[1][i], 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}