/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:46:35 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/13 10:44:50 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    int i;
    char *str;

    str = ft_calloc(ft_strlen(s1), sizeof(char));
    if (!str)
        return (NULL);
    ft_memcpy(str, s1, sizeof(s1));
    return (str);
}

// int main()
// {
//     int dest[10];
//     char src[] = "abcdef";
//     ;
//     // for (size_t i = 0; i < 4; i++)
//     printf("%s\n", strdup(NULL));
// }