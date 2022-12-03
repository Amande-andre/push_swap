/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:30:11 by anmande           #+#    #+#             */
/*   Updated: 2022/12/03 19:35:53 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

typedef struct s_start
{
	t_list	*start_a;
}	t_start;
//struct s_list	*start_b;


t_list	*ft_lstnew(int content);
void	ft_addfirst(t_list **new_list, int nb);
void    ft_sa(t_start *start);
int		ft_start(t_start **start, t_list *list);

#endif