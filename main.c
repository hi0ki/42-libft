#include "libft.h"
#include <string.h>
int main()
{
    char dest[] = "heallao\0";
    char src[] = "heallao2B";
    printf("%d\n", ft_strncmp(dest, src, 10));
    printf("%d\n", strncmp(dest, src, 10));
}