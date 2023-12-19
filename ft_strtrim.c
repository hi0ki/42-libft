/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:43:01 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/19 06:52:03 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	if ((ft_strlen(s1) == 0 && ft_strlen(set) == 0))
		return (ft_strdup(""));
	else if (!ft_strlen(s1))
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	str = ft_substr(s1, i, j - i + 1);
	if (!str)
		return (NULL);
	return (str);
}

// int main()
// {
//         printf("%s", ft_strtrim("abcdba", "abc"));
// }
