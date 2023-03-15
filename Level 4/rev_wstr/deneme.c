#include <stdlib.h>

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **temp;

	while (str[i] && str[i] <= 32)
		i++;
	if(!(temp = (char **)malloc(sizeof(char) * 256)))
		return NULL;
	while (str[i])
	{
		k = 0;
		if(!(temp[j] = (char *)malloc(sizeof(char) * 4096)))
			return NULL;
		while (str[i] && str[i] > 32)
			temp[j][k++] = str[i++];
		while (str[i] && str[i] <= 32)
			i++;
		temp[j][k] = '\0';
		j++;
	}
	temp[j] = NULL;
	return (temp);
}

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

#include <unistd.h>

void ft_arg_swap(char **str)
{
	int i = 0;

	char **res;

	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, str[i], ft_strlen(str[i]));
		i--;
		if (i >= 0)
			write(1, " ", 1);
	}
}

#include <stdio.h>
int main(int ac, char **av)
{
	char **str = ft_split(av[1]);
	ft_arg_swap(str);
}