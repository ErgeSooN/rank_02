#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int end = 0;
		int start = 0;

		while (av[1][end]) //null görene kadar ilerle
			end++;
		end--; //null'un bir önceki karakterine (son karaktere) gel
		while (av[1][end] == 32 || av[1][end] == 9) // son kelimenin son harfine gel
			end--;
		start = end;
		while (av[1][start] != 32 && av[1][start] != 9 && av[1][start]) //son kelimenin ilk harfine gel
			start--;
		start++;
		while (start <= end)
		{
			write(1, &av[1][start], 1);
			start++;	
		}
	}
	write(1, "\n", 1);
	return (0);
}