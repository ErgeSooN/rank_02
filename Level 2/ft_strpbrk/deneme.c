#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}


int main()
{
	char *s1 = "asdfghjkl";
	char *s2 = "k";

	printf("%s", ft_strpbrk(s1, s2));
}