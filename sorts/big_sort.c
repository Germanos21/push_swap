/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:00:23 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/08 18:42:16 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	best_move(int size, int large_idx, t_moves *move)
{
	int	midpoint;

	midpoint = size / 2;
	if (large_idx == 0)
		return ;
	if (large_idx <= midpoint)
	{
		move->direction = 1;
		move->step = large_idx;
	}
	else
	{
		move->direction = 0;
		move->step = size - large_idx;
	}
}

void	push_sort(t_swplst **a_stk, t_swplst **b_stk)
{
	t_moves	move;
	int		sizelst;

	sizelst = ft_lstsize_ps(*b_stk);
	while (sizelst > 0)
	{
		move = (t_moves){0};
		get_index(*b_stk);
		best_move(sizelst, find_largest(*b_stk), &move);
		while (move.step > 0)
		{
			if (move.direction == 0)
				swap_rrb(b_stk, 1);
			else
				swap_rb(b_stk, 1);
			move.step--;
		}
		swap_pa(a_stk, b_stk);
		get_index(*b_stk);
		sizelst--;
	}
}

void	big_sort(t_swplst **a_stk, t_swplst **b_stk, int size)
{
	int			iter;
	int			chunk;
	t_swplst	*temp;

	chunk = size_of_chunk(size);
	iter = 1;
	temp = *a_stk;
	while ((*a_stk) != NULL)
	{
		if (temp->pos >= ((iter - 1) * chunk) && temp->pos <= iter * chunk)
			swap_pb(a_stk, b_stk);
		else
			swap_ra(a_stk, 1);
		if (ft_lstsize_ps(*b_stk) == chunk * iter)
			iter++;
		temp = (*a_stk);
	}
	get_index(*b_stk);
	push_sort(a_stk, b_stk);
}
