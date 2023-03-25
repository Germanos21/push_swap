/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:57:36 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/05 19:17:22 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_rra(t_swplst **a_stk, int flag)
{
	t_swplst	*temp;
	t_swplst	*temp2;

	temp = *a_stk;
	temp2 = *a_stk;
	if (temp->next == NULL)
		return ;
	while (temp->next != NULL)
		temp = temp->next;
	while (temp2->next != temp)
		temp2 = temp2->next;
	temp2->next = NULL;
	temp->next = *a_stk;
	*a_stk = temp;
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	swap_rrb(t_swplst **b_stk, int flag)
{
	t_swplst	*temp;
	t_swplst	*temp2;

	temp = *b_stk;
	temp2 = *b_stk;
	while (temp->next != NULL)
		temp = temp->next;
	while (temp2->next != temp)
		temp2 = temp2->next;
	temp2->next = NULL;
	temp->next = *b_stk;
	*b_stk = temp;
	if (flag == 1)
		write(1, "rrb\n", 4);
}

void	swap_rrr(t_swplst **a_stk, t_swplst **b_stk, int flag)
{
	swap_rra(a_stk, flag);
	swap_rrb(b_stk, flag);
	write(1, "rrr\n", 4);
}
