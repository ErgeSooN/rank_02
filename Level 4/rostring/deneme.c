#include <stdlib.h>
#include <unistd.h>

char **ft_split(char *str)
{
	int i = 0;
	int k = 0;
	int j = 0;
	char **temp;

	while (str[i] && str[i] <= 32)
		i++;
	if(!(temp = (char **)malloc(sizeof(char) * 256)))
		return (NULL);
	while (str[i])
	{
		k = 0;
		if(!(temp[j] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
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

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
	(void) ac;
	int i = 1;
	char **x = ft_split(av[1]);

	while (x[i])
	{
		ft_putstr(x[i]);
		write(1, " ", 1);
		i++;
	}
	ft_putstr(x[0]);
	write(1, "\n", 1);
	return (0);
}
