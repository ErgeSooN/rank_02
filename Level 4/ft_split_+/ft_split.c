#include <stdlib.h>
/*
char    **ft_splait(char *str)
{
    int i = 0; // str index
    int j = 0; // tempin argüman indexi
    int k = 0; // temp'e yazdırma indexi
    char **temp; // return degiskeni

    while (str[i] && str[i] <= 32) // baştaki yazdırılamayan karakterleri atla
        i++;
    if(!(temp = (char **)malloc(sizeof(char) * 256))) // argümanlar için yer ayırdık
        return NULL;
    while (str[i])
    {
        k = 0;
        if(!(temp[j] = (char *)malloc(sizeof(char) * 4096))) // argümanların içerisi için yer ayırdık
            return NULL;
        while (str[i] && str[i] > 32) // eğer yazdırılabilir karakterler varsa temp'e eşitle
            temp[j][k++] = str[i++];
        while (str[i] && str[i] <= 32) // eğer yazdırılabilir karakterler yoksa indexi arttır
            i++;
        temp[j][k] = '\0'; // j değişkeninin içindeki k nın indexine null koy
        j++;
    }
    temp[j] = '\0'; // j değişkeni sona geldiği için sonuna null koy
    return (temp); // temp'i returnle 
}
*/

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **temp;

    while (str[i] && str[i] <= 32)
        i++;
    if (!(temp = (char **)malloc(sizeof(char) * 256)))
        return NULL;
    while (str[i])
    {
        k = 0;
        if (!(temp[j] = (char *)malloc(sizeof(char) * 4096)))
            return NULL;
        while (str[i] && str[i] > 32)
            temp[j][k++] = str[i++];
        while (str[i] && str[i] <= 32)
            i++;
        temp[j][k] = '\0';
        j++;
    }
    temp[j] = '\0';
    return (temp);
}