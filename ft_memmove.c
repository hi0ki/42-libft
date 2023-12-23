/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:46:47 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/22 20:39:10 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			len--;
			dest[len] = s[len];
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
