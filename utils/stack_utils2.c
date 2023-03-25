/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:48:10 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/08 16:06:42 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_swplst **a_stk)
{
	t_swplst	*temp;

	temp = *a_stk;
	while (temp != NULL)
	{
		node_del(a_stk);
		temp = *a_stk;
	}
	return ;
}

t_swplst	*find_smallest_node(t_swplst *head, int *array, int arr_len)
{
	t_swplst	*temp;
	t_swplst	*ret;
	int			min;

	temp = head;
	min = INT_MAX;
	while (temp != NULL)
	{
		if (pos_error(temp->index, array, arr_len) == 0)
		{
			if (temp->data <= min)
			{
				min = temp->data;
				ret = temp;
			}
		}
		temp = temp->next;
	}
	return (ret);
}

void	get_index(t_swplst *a_stk)
{
	t_swplst	*curr;
	int			index;

	curr = a_stk;
	index = 0;
	while (curr != NULL)
	{
		curr->index = index++;
		curr = curr->next;
	}
}

void	get_pos(t_swplst *a_stk, int length)
{
	t_swplst	*curr;
	int			ar[50000];
	int			i;

	curr = NULL;
	i = 0;
	while (i < length)
	{
		curr = find_smallest_node(a_stk, ar, i);
		curr->pos = i + 1;
		ar[i] = curr->index;
		i++;
	}
}

int	find_min_val(t_swplst *a_stk)
{
	t_swplst	*temp;
	int			min;

	temp = a_stk;
	min = INT_MAX;
	while (temp)
	{
		if (temp->data <= min)
			min = temp->data;
		temp = temp->next;
	}
	return (min);
}
