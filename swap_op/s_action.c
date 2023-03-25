/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_action.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:54:10 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/05 19:17:36 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_sa(t_swplst **a_stk, int flag)
{
	int			temp;
	int			size;

	size = ft_lstsize_ps(*a_stk);
	if (size < 2)
		return ;
	temp = (*a_stk)->data;
	(*a_stk)->data = (*a_stk)->next->data;
	(*a_stk)->next->data = temp;
	temp = (*a_stk)->pos;
	(*a_stk)->pos = (*a_stk)->next->pos;
	(*a_stk)->next->pos = temp;
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	swap_sb(t_swplst **b_stk, int flag)
{
	int			temp;
	int			size;

	size = ft_lstsize_ps(*b_stk);
	if (size < 2)
		return ;
	temp = (*b_stk)->data;
	(*b_stk)->data = (*b_stk)->next->data;
	(*b_stk)->next->data = temp;
	temp = (*b_stk)->pos;
	(*b_stk)->pos = (*b_stk)->next->pos;
	(*b_stk)->next->pos = temp;
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	swap_ss(t_swplst **a_stk, t_swplst **b_stk, int flag)
{
	swap_sa(a_stk, flag);
	swap_sb(b_stk, flag);
	write(1, "ss\n", 3);
}
