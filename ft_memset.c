/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:25:50 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/11 01:41:25 by eel-ansa         ###   ########.fr       */
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

// int main()
// {
//     int str[] = {1, 2, 3};
//     double *str2 = calloc(3,sizeof(int));
    
//     int i = 0;
    
//     memset(str, 4, 3);
//     memset(str2, 1/49, 3);
    
//     while (i < 3)
//     {
//         printf("%d\n", str[i]);
//         i++;
//     }
//     i = 0;
//     while (i<3)
//     {
//         printf("%d\n", str2[i]);
//         i++;
//     }

    
// }