#include "libft.h"
#include <string.h>
int main()
{
    const char dest = "hello";
    int i = 0;
    printf("%s\n", _strdup(dest));
}

char *_strdup(const char *s)
{
    char *str;

    str = malloc(ft_strlen(s) * sizeof(char));
    if (!str)
        return (NULL);
    str = (char *)s;
    return (str);
}