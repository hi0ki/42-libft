/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 03:36:28 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/24 05:42:36 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list *check;

    i = 0;
    check = lst;
    while (check != NULL)
    {
        check = check->next;
        i++;
    }
    return (i);
}