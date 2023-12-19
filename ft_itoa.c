/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:44:12 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/19 05:04:23 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_d(int size)
{
    int i;

    i = 0;
    if (size < 0)
        i++;
    while (size)
    {
        size = size / 10;
        i++;
    }
    return (i);
}
char *ft_itoa(int n)
{
    int i;
    unsigned int nmb;
    int sign;
    char *str;

    if (n == 0)
        return (ft_strdup("0"));
    i = count_d(n);
    nmb = n;
    sign = 0;
    if (n < 0)
    {
        nmb *=-1;
        sign++;
    }
    str = malloc(i + 1 * sizeof(char));
    str[i--] = '\0';
    while (i >= 0 && nmb !=0)
    {
        str[i] = nmb % 10 + '0';
        nmb = nmb / 10;
        i--;
    }
    if (sign == 1)
        str[0] = '-';
    return (str);
}

// int main()
// {
//     int i = -2147483649;
//     printf("%s", ft_itoa(i));
// }