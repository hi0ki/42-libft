/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:25:50 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/21 00:56:43 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main()
// {
//  	char *b1 = (char*)malloc(sizeof(char) * (0xF0000 + 1));
//  	char *b2 = (char*)malloc(sizeof(char) * (0xF0000 + 1));

//  	*b1 = 0;
//  	*b2 = 0;
//  	ft_memset(b2, '\5', 0xF0000);
//  	if (!memcmp(b1, b2, 0xF0000))
//  	{
//  		free(b1);
//  		free(b2);
//  		printf("TEST_SUCCESS");
//  		return 0;
//  	}
//  	free(b1);
//  	free(b2);
//  	printf("TEST_FAILED");
//  	return 1;
// }
