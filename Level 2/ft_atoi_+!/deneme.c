#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while ((str[i] == 32|| str[i] == 9 ) && str[i])
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
	return (res * sign);
}


int main()
{
	char str[] = " 	 	-1234567890";
	printf("%d", ft_atoi(str));
}