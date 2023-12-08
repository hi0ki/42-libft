/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:48:27 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/08 23:15:23 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
// int main()
// {
//     char str[] = "hello";
//     int arr[10];
//     int i = 0;

//     ft_bzero(str, 5);
//     printf("%s", str);

//     ft_bzero(arr, 12);
//     while (i < 10)
//     {
//         printf("%d\n,", arr[i]);
//         i++;
//     }
// }
