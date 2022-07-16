/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:54:10 by gchernys          #+#    #+#             */
/*   Updated: 2022/07/15 15:16:41 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Swap the first 2 elements at the top of stack a.
//Do nothing if there is only one or no elements.
void	act_sa(t_elem **head, int output)
{
	t_elem	*p;
	t_elem	*next;

	p = *head;
	if (*head && (*head)->next)
	{
		next = (*head)->next;
		(*head)->next = next->next;
		next->next = p;
		(*head) = next;
		if (output)
			ft_putstr("sa\n");
	}
}

// Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.

void	act_sb(t_elem **head, int output)
{
	t_elem	*p;
	t_elem	*next;

	p = *head;
	if (*head && (*head)->next)
	{
		next = (*head)->next;
		(*head)->next = next->next;
		next->next = p;
		(*head) = next;
		if (output)
			ft_putstr("sa\n");
	}
}

// sa and sb at the same time
void	act_ss(t_elem **head_a, t_elem **head_b, int output)
{
	t_elem	*p;
	t_elem	*next;
	int		flag;

	flag = 0;
	p = *head_a;
	if (*head_a && (*head_a)->next)
	{
		next = (*head_a)->next;
		(*head_a)->next = next->next;
		next->next = p;
		(*head_a) = next;
		flag = 1;
	}
	p = *head_b;
	if (*head_b && (*head_b)->next)
	{
		next = (*head_b)->next;
		(*head_b)->next = next->next;
		next->next = p;
		(*head_b) = next;
		flag += 2;
	}
	act_ss_output(flag);
}

static void	act_ss_output(int flag);
{
	if (flag = 1)
		ft_putstr("sa\n")
	if (flag = 2)
		ft_putstr("sb\n")
	if (flag = 3)
		ft_putstr("ss\n")
}
// Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty
// void	act_pa()
// {
	
// }
