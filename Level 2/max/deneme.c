#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int  i = 0;
	int res = tab[i];
	while (i < len)
	{
		if(res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}

int main()
{
	int tab[] = {-1, 0, 15, 31, 89, -98, 12};

	printf("%d\n", max(tab, 7));
}