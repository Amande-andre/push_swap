/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gatherarg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:29:18 by anmande           #+#    #+#             */
/*   Updated: 2022/11/26 05:48:18 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_new_list *initialisation()
{
    t_new_list *new_list;
	t_node *node;
	
	new_list = malloc(sizeof(*new_list));
	node = malloc(sizeof(*node));
    if (new_list == NULL || node == NULL)
        return(NULL);
    node->value = 0;
    node->next = NULL;
    new_list->first = node;

    return new_list;
}

void	addfront(t_new_list new_list, int newnb)
{
	t_node	*newf;
	
	newf = malloc(sizeof(t_node));
	if (new_list == NULL || newf == NULL)
		return NULL;
	newf->value = newnb;
	new_list->next = new_list->first;
}
t_list ft_gatherarg()
