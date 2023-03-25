/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:28:03 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/09 17:57:55 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	error_free(t_swplst *a_stk)
{
	write (1, "Error\n", 6);
	free_stack(&a_stk);
	exit(1);
}

int	ps_atoi(char *str, t_swplst *a_stk)
{
	long int	x;
	long int	z;

	x = 1;
	z = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*(str++) == '-')
			x *= -1;
	}
	while ((*str >= '0' && *str <= '9') || *str == '-' || *str == '+')
	{
		if (*str == '-' || *str == '+')
			error_free(a_stk);
		z = (*str - '0') + (z * 10);
		str++;
	}
	if ((z * x < INT_MIN) || z * x > INT_MAX)
		error_free(a_stk);
	return (z * x);
}
