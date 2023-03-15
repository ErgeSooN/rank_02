#include <unistd.h>
/*int iter(char *str, char s1, int len)
{
	int i = 0;
	while(str[i] && (len > i || len == -5))
	{
		if(str[i] == s1)
		{
			return(1);
		}
		i++;
	}
	return 0;
}

int amain(int argc, char **argv)
{
	int i = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			if(!inter(argv[1],argv[1][i],i) && inter(argv[2],argv[1][i],-5))
				write(1,&argv[1][i],1);
			i++;		
		}
	}write(1,"\n",1);
}

int inter(char *str, char s1, int len)
{
	int i = 0;
	while (str[i] && (len > i || len == -5))
	{
		if (str[i] == s1)
			return(1);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 3)
	{

		while (av[1][i])
		{
			if(!inter(av[1], av[1][i], i) && inter(av[2], av[1][i], -5))
				write(1, &av[1][i], 1);
			i++;	
		}
	}
	write(1, "\n", 1);
	return (0);
}
*/


int iter(char *str, char s1, int len)
{
	int i = 0;

	while (str[i] && (len > i || len == -5))
	{
			if(str[i] == s1)
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
			if (!iter(av[1], av[1][i], i) && iter(av[2], av[1][i], -5))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}