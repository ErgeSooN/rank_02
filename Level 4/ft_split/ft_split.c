#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char *str) 
{
    int i = 0;
    int j = 0;
    int k = 0;
    int word_count = 0;
    int len = strlen(str);

    while (i < len) 
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) 
	{
            i++;
        }
        if (str[i]) 
	{
            word_count++;
            while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')) 
	    {
                i++;
            }
        }
    }
    char **result = (char**)malloc(sizeof(char*) * (word_count + 1));
    if (result == NULL) 
    {
        return NULL;
    }
    i = 0;
    while (i < len) 
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) 
	{
            i++;
        }
        if (str[i]) 
	{
            j = i;
            while (str[j] && (str[j] != ' ' && str[j] != '\t' && str[j] != '\n')) 
	    {
                j++;
            }
            result[k] = (char*)malloc(sizeof(char) * (j - i + 1));
            if (result[k] == NULL) 
	    {
                return NULL;
            }
            strncpy(result[k], str + i, j - i);
            result[k][j - i] = '\0';
            k++;
            i = j;
        }
    }
    result[k] = NULL;
    return result;
}

#include <stdlib.h>

int		count_words(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	char	**arr;
	int		count;
	int		i;
	int		j;
	int		k;

	count = count_words(str);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count)
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		k = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		arr[j] = (char *)malloc(sizeof(char) * (i - k + 1));
		if (!arr[j])
			return (NULL);
		k = 0;
		while (k < i - j)
			arr[j][k++] = str[j++];
		arr[j][k] = '\0';
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
