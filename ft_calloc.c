/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 01:30:22 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/11 15:39:56 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *str;

    str = malloc(count * size);
    if (str ==  NULL)
        return (NULL);
    ft_memset(str , '\0', sizeof(str));
    return ((str);
}
