#include <stdio.h>

int c2i(char c)
{
	if (c >= '0' && c <= '9')
		return (c - 48);
    else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else 
		return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int res = 0;
 
	if(str[i] == '-')
		sign = -1;
	while (str[i])
	{
		res = (res *str_base) + (c2i(str[i]));
		i++;
	}
	return(res * sign);
}


int main()
{
	printf("%d\n", ft_atoi_base("ff", 16));
	printf("%d\n", ft_atoi_base("0", 16));
	printf("%d\n", ft_atoi_base("-0", 16));
	printf("%d\n", ft_atoi_base("-2147483648", 10));
	printf("%d\n", ft_atoi_base("2147483647", 10));
	printf("%d\n", ft_atoi_base("ffffffff", 16));

}