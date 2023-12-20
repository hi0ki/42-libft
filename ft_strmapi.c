/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:20:27 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/21 00:22:53 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char f(unsigned int i, char c)
// {
//     printf("index : %d\n", i);
//     if (c >= 'A' && c <= 'Z')
//         c +=32;
//     return (c);
// }

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *str;

    if (!s)
        return (NULL);
    str = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

// int main()
// {
//     char str[]="hello";
//     char c;
//     printf("%s", ft_strmapi(str, f));
// }