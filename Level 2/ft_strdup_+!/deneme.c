#include <stdlib.h>
#include <stdio.h>


char    *ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	char *dest; 
	
	while (src[len])
		len++;
	dest = malloc((len + 1) * sizeof(char)); 
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char *abc = "enes";
	printf("%s\n", abc);
}

//char *dest; // 8byte => char ,char char char 1, 1 ,1 ,1 ,1 
	//main adrss 8byte
	//1 byte
	//1 byte
	//---------
	//10 byte