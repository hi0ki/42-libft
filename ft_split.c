/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:44:30 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/22 15:33:24 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_word(char const *s, char c)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_alloc(char *s, char c, int c_word, char **str)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = 0;
	while (i < c_word)
	{
		while (s[start] == c && s[start])
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		str[i] = ft_substr(s, start, end - start);
		if (!str[i])
			return (ft_free(str));
		start = end;
		i++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len_w;

	if (!s)
		return (NULL);
	len_w = c_word(s, c);
	str = (char **)malloc(sizeof(char *) * (len_w + 1));
	if (!str)
		return (NULL);
	str = ft_alloc((char *)s, c, len_w, str);
	return (str);
}

// int main()
// {
//     char str[] = "  hello world hiki hi";
//     char set = ' ';
//     char **arr = ft_split(str, set);

//     // Loop through the array and print each string
//     for (int i = 0; arr[i] != NULL; i++)
//     {
//         printf("%s\n", arr[i]);
//     }

//     // Free the allocated memory
//     for (int i = 0; arr[i] != NULL; i++)
//     {
//         free(arr[i]);
//     }
//     free(arr);

//     return 0;
// }
