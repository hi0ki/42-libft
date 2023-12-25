/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 07:19:20 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/25 07:42:19 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    if (!new || !lst)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    last = *lst;
    while (last->next)
        last = last->next;
    last->next = new;
}

// int main()
// {
//     t_list *node;
//     t_list *new;
//     new = ft_lstnew("last node");
//     node = ft_lstnew("head");
//     node->next =ft_lstnew("new node");
//     node->next->next =ft_lstnew("new node!");
//     node->next->next->next =NULL;
//     ft_lstadd_back(&node,new);
//     while (node)
//     {
//         printf("%s\n",node->content);
//         node =node->next;
//     }
// }