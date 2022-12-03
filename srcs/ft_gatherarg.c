/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gatherarg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:29:18 by anmande           #+#    #+#             */
/*   Updated: 2022/12/03 19:35:49 by anmande          ###   ########.fr       */
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
        return (new);
}

int	ft_start(t_start **start, t_list *list)
{
	t_start *new_start;
	new_start = malloc(sizeof(t_start));
	if (!new_start)
		return (0);
	new_start->start_a = list;
	return (1);
}

void	ft_addfirst(t_list **new_list, int nb)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (new_list == NULL || node == NULL)
		return;
	node->content = nb;
	node->next = *new_list;
	*new_list = node;
}
//t_list ft_gatherarg()
