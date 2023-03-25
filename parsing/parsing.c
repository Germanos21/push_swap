/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:40:58 by gchernys          #+#    #+#             */
/*   Updated: 2022/10/22 06:03:09 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_rep_num(t_swplst **a_stk)
{
	t_swplst	*num;
	t_swplst	*run;

	num = *a_stk;
	while (num != NULL)
	{
		run = num->next;
		while (run != NULL)
		{
			if (num->data == run->data)
				return (1);
			run = run->next;
		}
		num = num->next;
	}
	return (0);
}

int	pos_error(int index, int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[i] == index)
			return (1);
		i++;
	}
	return (0);
}
