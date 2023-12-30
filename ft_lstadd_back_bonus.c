/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 07:19:20 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/30 09:52:02 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

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
// 	t_list *head = ft_lstnew("head node");
// 	t_list *node1 = ft_lstnew("node 1");
// 	t_list *node2 = ft_lstnew("node 2");
// 	t_list *new_node = ft_lstnew("new node");

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, new_node);

// 	t_list *skip = head;
// 	while (skip)
// 	{
// 		printf("%s\n", skip->content);
// 		skip = skip->next;
// 	}
// }