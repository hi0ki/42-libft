/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:35:57 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/14 22:53:41 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;

    if (ft_strlen(s) <= start)
        len = 0;
    if  (ft_strlen(s) <= (start + len))
        len = (strlen(s) - start);
    i = 0;
    str = malloc(len * sizeof(char) + 1);
    if (!str)
        return (NULL);
    while (i < len && s[i])
    {
        str[i] = s[i + start];
        i++;
    }
    str[i] = '\0';
    return (str);
}

// int main()
// {
//     char str[] = "lorem ipsuhilo";
    
//     printf("%s", ft_substr(str, 0, 10));
// }