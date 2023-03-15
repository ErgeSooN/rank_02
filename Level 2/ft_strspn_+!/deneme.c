#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i])
	{
		if (s[i] == accept[i])
			i++;
		else 
			return(i);			
	}
	return (0);
}


int main()
{
	char s[] = "asdfghjk";
	char accept[] = "qwertyuı";

	printf("%lu", ft_strspn(s, accept));
}
