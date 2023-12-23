/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:56:38 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/22 17:49:29 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*s;

	i = 0;
	if (dst == src)
		return (dst);
	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// 	printf("%s", memcpy("hikii", "hikii", 4));
// }