#include "libft.h"
#include <string.h>
int main()
{
    int *dest;
    int i = 0;
    dest = ft_calloc(2, sizeof(int));
    while (i < 4)
    {
        printf("%d\n", dest[i]);
        i++;
    }
    // printf("%s\n", ft_memchr(dest, 'w', sizeof(dest)));
}