#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (str[i] == 32 || str[i] == 9)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return(res * sign);
}

void ft_putnbr(unsigned int num)
{
	char str[] = "0123456789";

	if (num > 9)
		ft_putnbr(num /10);
	write(1, &str[num % 10], 1);
}

int is_prime(int num)
{
	int i = 2;

	while (num > i)
	{
		if ((num % i) == 0)
			return (0);
		else
		i++;
	}
	return (1);
}


int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 2;
		int num = ft_atoi(av[1]);
		int res = 0;

		while (num >= i)
		{
			if (is_prime(i) == 1)
				res += i;
			i++;
		}
		ft_putnbr(res);
	}
	else
		ft_putnbr (0);
	write(1, "\n", 1);
	return (0);
}