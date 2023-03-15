#include <stdlib.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	int x = 0;
	char temp;

	while (str[len])
		len++;
	x = len;
	len--; // len = NULL olduğu için 1 azalttık
	while (i < x / 2)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int main()
{
	char str[] = "asdfghjkl";

	printf("%s", ft_strrev(str));
}