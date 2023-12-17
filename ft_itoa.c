/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:44:12 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/17 23:46:45 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_d(int size)
{
    int i;

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
    int sign;
    char *str;

    if (n == 0)
        return (ft_strdup(""));
    i = count_d(n);
    sign = 0;
    if (n < 0)
    {
        n *=-1;
        sign++;
        i++;  
    }
    str = malloc(i + 1 * sizeof(char));
    if (!str)
        return (NULL);
    str[i--] = '\0';
    while (i >= 0 && n != 0)
    {
        str[i] = n % 10 + '0';
        n = n / 10;
        i--;
    }
    if (sign == 1)
        str[i] = '-';
    return (str);
}

int main()
{
    int i = ---123456789;
    printf("%s", ft_itoa(i));
}