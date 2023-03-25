/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:34:55 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/08 18:39:17 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	parse(int argc, char **argv, t_swplst **a_stk)
{
	while (argc >= 2)
	{
		if (push_to_stack(argv[argc - 1], a_stk) == -1)
			return (-1);
		argc--;
	}
	return (1);
}

int	check_error(int argc, char **argv, t_swplst **a_stk)
{
	if (parse(argc, argv, a_stk) == -1)
		return (-1);
	if (check_rep_num(a_stk) == 1)
		return (-1);
	return (0);
}
