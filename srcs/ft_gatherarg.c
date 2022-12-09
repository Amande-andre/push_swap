/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gatherarg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:29:18 by anmande           #+#    #+#             */
/*   Updated: 2022/12/09 20:41:29 by anmande          ###   ########.fr       */
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

int	ft_middl(t_list *list)
{
	int	i;
	int	len;
	
	i = 0;
	len = 0;
	while (list)
	{
		i += list->content;
		len++;
		list = list->next;
	}
	return (i/len);
}
