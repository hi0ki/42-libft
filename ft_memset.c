/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:25:50 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/09 23:04:47 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *str;

    i = 0;
    str = (unsigned char *)b;
    while (i < len && str[i])
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (b);
}