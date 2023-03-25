/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:20:01 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/04 20:39:46 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_swplst **a_stk, t_swplst **b_stk, int size)
{
	if (size == 1)
		return ;
	else if (size == 2 && check_sort(*a_stk) == 0)
		swap_sa(a_stk, 1);
	else if (size == 3 && check_sort(*a_stk) == 0)
		minisort_three(a_stk);
	else if (size == 4 && check_sort(*a_stk) == 0)
		minisort_four(a_stk, b_stk);
	else if (size == 5 && check_sort(*a_stk) == 0)
		minisort_five(a_stk, b_stk);
	else if (size > 5 && check_sort(*a_stk) == 0)
		big_sort(a_stk, b_stk, size);
}

int	check_sort(t_swplst *a_stk)
{
	t_swplst	*temp;

	temp = a_stk;
	while (temp->next)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}
