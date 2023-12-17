/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:46:35 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/16 18:26:36 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1));
	return (str);
}

// int main()
// {
//  	char *tmp = "this is a normal test";
//  	int r_size = strlen(tmp);
//  	int size;

//  	ft_strdup(tmp);
//  	size = get_last_malloc_size();
//  	if (size == r_size + 1)
//  	{
//  		printf("test_success");
//  		return 0;
// 	}
//  	printf("TEST_KO");
// }
