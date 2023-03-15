#include <stdio.h>


int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (str[i] != '\0')
    {
        result *= str_base;
        if (str[i] >= 'A' && str[i] <= 'Z')
            result += str[i] - '7';
        else if (str[i] >= '0' && str[i] <= '9')
            result += str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'z')
            result += str[i] - 'W';
        i++;
    }
    return (result * sign);
}

int main()
{
	printf("%d\n", ft_atoi_base("f", 15));
	printf("%d\n", ft_atoi_base("0", 15));
	printf("%d\n", ft_atoi_base("-0", 15));
	printf("%d\n", ft_atoi_base("-2147483648", 10));
	printf("%d\n", ft_atoi_base("2147483647", 10));
	printf("%d\n", ft_atoi_base("ffffffff", 15));

}