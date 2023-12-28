/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 19:05:49 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/28 03:49:57 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *node = malloc(sizeof(t_list));

//     node->content = "New node";
//     node->next = NULL;

//     t_list *e_node = malloc(sizeof(t_list));

//     e_node->content = "Existing node";
//     e_node->next = NULL;

//     ft_lstadd_front(&e_node, node);

//     t_list *current_node = e_node;
//     while (current_node)
//     {
//         printf("%s\n", current_node->content);
//         current_node = current_node->next;
//     }

//     return (0);
// }
