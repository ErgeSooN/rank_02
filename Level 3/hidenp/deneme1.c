#include <unistd.h>

int main(int ac,char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;

		while(av[1][i])
		{
			while(av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					i++;
					if(av[1][i] == '\0')
					{
						write(1, "1\n", 2);
						return (0);
					}
				}
				j++;
			}
			i++;
		}

	}
	write(1, "0\n", 2);
	return(0);
}