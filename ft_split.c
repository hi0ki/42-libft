/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:44:30 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/19 23:42:50 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static size_t	ft_countword(char const *s, char c)
{
	size_t	count;
    int i = 0;
	if (!s[i])
		return (0);
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0); 
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

int main()
{
    char str[] = "chellocwordchiki";
    char set = 'c';
    char **arr = ft_split(str, set);

    // Loop through the array and print each string
    for (int i = 0; arr[i] != NULL; i++)
    {
        printf("%s\n", arr[i]);
    }

    // Free the allocated memory
    for (int i = 0; arr[i] != NULL; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}