/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 01:10:50 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/11 01:27:53 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *dest;
    unsigned char *src;

    i = 0;
    dest =(unsigned char *)s1;
    src =(unsigned char *)s2;
    while (i < n)
    {
        if ((unsigned char)dest[i] != (unsigned char)src[i])
            return (dest[i] - src[i]);
        i++;
    }
    return (0);
}