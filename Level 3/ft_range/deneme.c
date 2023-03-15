#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int size;
	int step;
	int i = 0;
	if (start > end)
	{
	 size = start - end + 1;
		step = 1;
	}
	else
	{
		size = end - start + 1;
		step = -1;
	}
	int *res = malloc(sizeof(int) * size);
	while (i < size)
	{
		res[i] = start;
		start += step; 
		i++;
	}
	return (res);
}

#include <stdio.h>

int main()
{
	int a = 15;
	int b = 10;
	
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", ft_range(b,a)[i]);

	}
}