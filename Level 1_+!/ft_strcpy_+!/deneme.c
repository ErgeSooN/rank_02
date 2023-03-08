#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	
}

int main()
{
	char str1[] = "asdfghjkl";
	char str2[] = "zxcvbnmlo";

	ft_strcpy(str1, str2);
	ft_putstr(str1);
	return (0);
}