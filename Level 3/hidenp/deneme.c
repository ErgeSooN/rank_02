#include <unistd.h>
#include <stdio.h>
int main(int ac, char**av)
{
	int i = 0;
	int j = 0;
	if (ac == 3)
	{

		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					i++;
					if (av[1][i] == '\0')
					{
						write(1, "1\n", 2);
						return(1);
					}
				}
				j++;
			}
			if (av[1][i] != av[2][j])
			{
					i++;
			}	
		}
		write(1, "0", 1);
	}
		write(1, "\n", 1);
		return (0);
}