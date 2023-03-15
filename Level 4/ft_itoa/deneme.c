#include <stdlib.h>
#include <stdio.h>

/*char	*ft_itoa(int nbr)
{
	char *res;
	int i = 0;
	int len = 0;
	int sign = 1;

	if (nbr < 0)
	{
		nbr *= -1;
		len++;
		sign = -1;
	}
	int temp = nbr;
	while (temp > 9)
	{
		temp /= 10;
		len++;
	}
	res = malloc(sizeof(char) * len + 1);
	if (sign == -1)
	{
		res[i] = '-';
		i++;
	}
	while (len >= i)
	{

		res[len] = (nbr % 10) + 48;
		nbr = nbr / 10;
		len--;
	}
	return (res);
}
*/

char *ft_itoa(int nbr)
{
	
}

int main()
{
	int num = -23456;
	printf("%s", ft_itoa(num));

}
