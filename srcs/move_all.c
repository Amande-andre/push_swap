/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:11:17 by anmande           #+#    #+#             */
/*   Updated: 2022/12/07 16:05:41 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_list **list_a, t_list **list_b)
{
	ft_sa(list_a);
	ft_sb(list_b);
}

void	ft_rr(t_list **list_a, t_list **list_b)
{
	ft_ra(list_a);
	ft_rb(list_b);
}

void	ft_rrr(t_list **list_a, t_list **list_b)
{
	ft_rra(list_a);
	ft_rrb(list_b);
}
