int control(char str)
{
	
	if(str >= 'A' && str <= 'F')
		return (str - 55);
	if(str >= 'a' && str <= 'f')
		return (str - 87);
	if(str >= '0' && str <= '9')
		return (str - 48);
    return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int is_neg = 1;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		i++;
		is_neg = -1;
	}
	while (str[i])
	{
		if(control(str[i]) == -1 || control(str[i]) >= str_base)
			return (0);
		res = res * str_base + (control(str[i++]));
	}
	return(res * is_neg);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi_base("ff", 16));
	printf("%d\n", ft_atoi_base("0", 16));
	printf("%d\n", ft_atoi_base("-0", 16));
	printf("%d\n", ft_atoi_base("	-2147483648", 10));
	printf("%d\n", ft_atoi_base("2147483647", 10));
	printf("%d\n", ft_atoi_base("fffffffff", 16));

}