/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:40:58 by gchernys          #+#    #+#             */
/*   Updated: 2022/07/14 22:49:56 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	not_digit(char *str)
{
	while (*str && ft_isspace(*str))
		str++;
	while (str)
	{
		if (ft_isdigit(str) != 1)
			return (1);
		str++;
	}
	return (0);
}
