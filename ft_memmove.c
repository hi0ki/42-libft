/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:46:47 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/14 10:48:28 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;
	char	*s;

	if (!dst && !src)
		return (NULL);
	i = 0;
	j = len - 1;
	dest = (char *)dst;
	s = (char *)src;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (i < len)
		{
			dest[j] = s[j];
			j--;
			i++;
		}
	}
	return (dest);
}

// int main()
// {
//     char dest[] = "abcdefg";
//     char src[] = "abcdef";
//     printf("%s\n", ft_memmove(dest + 1, dest, 4));
// }
