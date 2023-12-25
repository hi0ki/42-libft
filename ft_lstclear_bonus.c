/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 13:13:03 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/25 13:41:16 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    while ((*lst))
    {
        del((*lst)->content);
        free((*lst));
        (*lst) = *lst->next;
    }
    *lst = NULL;
}