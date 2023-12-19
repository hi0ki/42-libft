/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 06:05:05 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/19 08:33:08 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2", 2);
        n = 147483648;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n *=-1;
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    ft_putstr_fd((n - '0'), fd);
}

// int main()
// {
//     int i = 5;
//     ft_putnbr_fd(i, 0);
// }