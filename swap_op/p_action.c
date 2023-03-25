/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_action.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:08:16 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/05 19:17:04 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_pa(t_swplst **a_stk, t_swplst **b_stk)
{
	t_swplst	*temp;

	if (!(*b_stk))
		return ;
	temp = *b_stk;
	push(a_stk, temp->data, 0, temp->pos);
	node_del(b_stk);
	write(1, "pa\n", 3);
}

void	swap_pb(t_swplst **a_stk, t_swplst **b_stk)
{
	t_swplst	*temp;

	temp = *a_stk;
	push(b_stk, temp->data, 0, temp->pos);
	node_del(a_stk);
	write(1, "pb\n", 3);
}
