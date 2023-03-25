/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_action.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:07:06 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/05 19:17:13 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_ra(t_swplst **a_stk, int flag)
{
	t_swplst	*first;
	t_swplst	*last;

	first = *a_stk;
	last = lstlast_ps(*a_stk);
	last->next = first;
	(*a_stk) = first->next;
	first->next = NULL;
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	swap_rb(t_swplst **b_stk, int flag)
{
	t_swplst	*first;
	t_swplst	*last;

	first = *b_stk;
	last = lstlast_ps(*b_stk);
	last->next = first;
	(*b_stk) = first->next;
	first->next = NULL;
	if (flag == 1)
		write(1, "rb\n", 3);
}

void	swap_rr(t_swplst **b_stk, t_swplst **a_stk, int flag)
{
	swap_ra(a_stk, flag);
	swap_rb(b_stk, flag);
	write(1, "rr\n", 3);
}
