/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:39:53 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/09 17:43:03 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_swplst	*lstlast_ps(t_swplst *head)
{
	while (head->next != NULL)
		head = head->next;
	return (head);
}

int	ft_lstsize_ps(t_swplst	*head)
{
	int			i;
	t_swplst	*temp;

	temp = head;
	i = 0;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

int	push_to_stack(char *str, t_swplst **stack_ptr)
{
	int	i;

	if (check_size_of_num(str) == -1 || check_not_num(str) == -1)
		return (-1);
	i = ps_atoi(str, *stack_ptr);
	push(stack_ptr, i, 0, 0);
	return (0);
}

void	push(t_swplst **head, int new_data, int new_index, int position)
{
	t_swplst	*new_node;

	if (head == NULL)
		return ;
	new_node = (t_swplst *) malloc(sizeof(t_swplst));
	new_node->data = new_data;
	new_node->index = new_index;
	new_node->pos = position;
	new_node->next = (*head);
	(*head) = new_node;
}

void	node_del(t_swplst **head)
{
	t_swplst	*temp;

	temp = *head;
	*head = (*head)->next;
	free(temp);
}
