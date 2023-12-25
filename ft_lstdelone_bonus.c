/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 22:53:11 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/25 10:58:25 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *lst)
// {
//     free (lst);
// }
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    lst->content = NULL;
    del(lst->content);
}

// int main()
// {
//     t_list *node = ft_lstnew("new node");
//     printf("%s\n", node->content);
//     ft_lstdelone(node, del);
//     printf("%s", node->content);
// }