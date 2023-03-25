/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:26:50 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/07 03:04:58 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	size_of_chunk(int size)
{
	if (size > 400)
		return (38);
	else if (size > 100)
		return (15);
	else if (size > 50)
		return (18);
	else
		return (4);
}

int	find_largest(t_swplst *head)
{
	int			ret;
	int			max;
	t_swplst	*temp;

	if (!head)
		return (0);
	temp = head;
	max = temp->pos;
	ret = temp->index;
	while (temp != NULL)
	{
		if (temp->pos > max)
		{
			ret = temp->index;
			max = temp->pos;
		}
		temp = temp->next;
	}
	return (ret);
}
