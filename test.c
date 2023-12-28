#include "libft.h"
int main()
{
    char str[] = "     mehdi hiki ansary      ";

    char **arr = ft_split(str, ' ');
    int i = 0;
    while (arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }
}