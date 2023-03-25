/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:02:16 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/10 22:47:03 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_swplst	*a_stk;
	t_swplst	*b_stk;
	int			size;

	b_stk = NULL;
	a_stk = NULL;
	if (check_error(argc, argv, &a_stk) == -1)
	{
		write(2, "Error\n", 6);
		free_stack(&a_stk);
		exit (1);
	}
	size = ft_lstsize_ps(a_stk);
	get_index(a_stk);
	get_pos(a_stk, size);
	sort(&a_stk, &b_stk, size);
	free_stack(&a_stk);
	return (0);
}
