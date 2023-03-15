#include <unistd.h>

void ft_putstr (char *str)
{
	int i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;

		
		while (av[1][i])
		{
			if(av[1][i] == av[2][j])
			{
				i++;
				if (av[1][i] == '\0')
					ft_putstr(av[1]);
			}
			if (av[2][j] == '\0')
				break ;
				
			j++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}

