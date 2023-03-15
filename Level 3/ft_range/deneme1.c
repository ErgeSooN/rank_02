#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int size;
	int artıs;

	if (start > end)
	{
		size = start - end + 1;
		artıs = 1; 
	}
	else if (start < end)
	{
		size = end - start + 1;
		artıs = -1;
	}
	int *res = malloc(sizeof(int) * size + 1);
	
	while (i < size)
	{
		res[i] = end;
		i++;
		end = end + artıs;
	}
	return(res);
}


#include <stdio.h>

int main()
{
	int a = 15;
	int b = 10;
	
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", ft_rrange(b,a)[i]);

	}
}