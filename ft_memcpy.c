/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:56:38 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/09 19:13:14 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest;
    unsigned char *s;

    i = 0;
    if (dst == NULL && src == NULL)
        return (NULL);
    dest = (unsigned char *)dst;
    s = (unsigned char *)src;
    while (i < n)
    {
        dest[i] = s[i];
        i++;
    }
    return (dst);
}
