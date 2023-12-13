/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:36:14 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/12 16:04:49 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t dlen;
    size_t slen;

    i = 0;
    dlen = strlen(dst);
    slen = strlen(src);
    if (dstsize <= dlen)
        return (slen + dstsize);
    j = dlen;
    while (src[i] != '\0' && i < dstsize - dlen - 1)
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[j] = '\0';
    return (dlen + slen);
}

// int main()
// {
//     char dest[10] = "hello";
//     char src[] = "abcdefg";

//     printf("%lu\n", ft_strlcat(dest, src, 7));
//     printf("%s\n", dest);
// }