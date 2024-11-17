/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:20:28 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/30 10:22:45 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *f(void *s)
// {
// 	s = "edit node";
// 	return (s);
// }

// void del(void *s)
// {
// 	free(s);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	void	*data;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		data = f(lst->content);
		node = ft_lstnew(data);
		if (!node)
		{
			del(node->content);
			ft_lstclear(&lst, del);
		}
		else
			ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}

// int main()
// {
// 	t_list *head = ft_lstnew(ft_strdup("head node"));
// 	t_list *node = ft_lstnew(ft_strdup("node"));
// 	t_list *node1 = ft_lstnew(ft_strdup("node1"));
// 	t_list *node2 = ft_lstnew(ft_strdup("node2"));

// 	ft_lstadd_back(&head, node);
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);

// 	t_list *check = head;
// 	while (check)
// 	{
// 		printf("befor edit :%s\n", check->content);
// 		check = check->next;
// 	}

// 	t_list *n_head = ft_lstmap(head, f ,del);
// 	t_list *skip = n_head;
// 	while (skip)
// 	{
// 		printf("after edit:%s\n", skip->content);
// 		skip = skip->next;
// 	}
// 	return 0;
// }