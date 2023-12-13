/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:36:40 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/13 12:15:32 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*chr;

	i = 0;
	str = (char *)haystack;
	chr = (char *)needle;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == chr[j] && chr[j] && i + j < len)
			j++;
		if (chr[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
