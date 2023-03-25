/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:43:25 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/01 06:04:15 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	minisort_three(t_swplst **a_stk)
{
	int	x;
	int	y;
	int	z;

	x = (*a_stk)->data;
	y = (*a_stk)->next->data;
	z = (*a_stk)->next->next->data;
	if ((x > y) && (x < z) && (y < z))
		swap_sa(a_stk, 1);
	else if ((x > y) && (y > z))
	{
		swap_sa(a_stk, 1);
		swap_rra(a_stk, 1);
	}
	else if ((x > y) && (x > z) && (y < z))
		swap_ra(a_stk, 1);
	else if ((x < y) && (x < z) && (y > z))
	{
		swap_sa(a_stk, 1);
		swap_ra(a_stk, 1);
	}
	else if ((x < y) && (x > z) && (y > z))
		swap_rra(a_stk, 1);
}

void	minisort_four(t_swplst **a_stk, t_swplst **b_stk)
{
	int	min;

	min = find_min_val(*a_stk);
	if ((*a_stk)->next->data == min)
		swap_ra(a_stk, 1);
	else if ((*a_stk)->next->next->data == min)
	{
		swap_ra(a_stk, 1);
		swap_ra(a_stk, 1);
	}
	else if ((*a_stk)->next->next->next->data == min)
		swap_rra(a_stk, 1);
	swap_pb(a_stk, b_stk);
	minisort_three(a_stk);
	swap_pa(a_stk, b_stk);
}

void	minisort_five(t_swplst **a_stk, t_swplst **b_stk)
{
	int			min;

	min = find_min_val(*a_stk);
	while ((*a_stk)->data != min)
		swap_ra(a_stk, 1);
	swap_pb(a_stk, b_stk);
	minisort_four(a_stk, b_stk);
	while (*b_stk)
		swap_pa(a_stk, b_stk);
}
