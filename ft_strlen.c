/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:47:55 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/08 23:18:12 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    unsigned int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

// int main()
// {
//     printf("%d", ft_strlen("mehdi"));
// }
