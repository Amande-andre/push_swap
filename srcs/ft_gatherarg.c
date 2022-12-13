/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gatherarg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:29:18 by anmande           #+#    #+#             */
/*   Updated: 2022/12/13 15:21:22 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *ft_lstnew(int content)
{
        t_list  *new;

        new = malloc(sizeof(t_list) * 1);
        if (new == NULL)
                return (NULL);
        new->next = NULL;
        new->content = content;
		new->index = 1;
        return (new);
}

void	ft_addfirst(t_list **new_list, int nb)
{
	t_list	*node;

	node = ft_lstnew(nb);
	if (new_list == NULL || node == NULL)
		return;
	node->content = nb;
	node->next = *new_list;
	*new_list = node;
}
