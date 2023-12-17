/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:36:26 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/15 15:20:44 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		dlen;
	int		slen;

	if (!s1|| !s2)
		return (NULL);
	dlen = ft_strlen(s1);
	slen = ft_strlen(s2);
	str = malloc((dlen + slen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, dlen);
	ft_memcpy(str + dlen, s2, slen);
	str[dlen + slen] = '\0';
	return (str);
}

// int main()
// {
//     char *s1 = "hv jgv";
//     char *s2 = "world!";
//     printf("%s", ft_strjoin(s1, s2));
// }
