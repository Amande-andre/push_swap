/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:30:11 by anmande           #+#    #+#             */
/*   Updated: 2022/11/26 05:49:39 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef	struct s_node
{
	int	value;
	struct s_node *next;
}	t_node;

typedef	struct s_new_list		//il s'agit du premier maillon qui possede les qualites de t_list, et qui pointe donc vers next;
{
	t_node	*first;
}	t_new_list;

t_new_list *initialisation();
void	addfront(t_new_list new_list, int newnb);


#include <stdlib.h>
#endif