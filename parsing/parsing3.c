/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:23 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/09 17:47:11 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_size_of_num(char *str)
{
	int	i;

	i = 0;
	while ((str[i] && ft_isspace(str[i]) == 0) && str[i] != '0')
		i++;
	if (i > 11)
		return (-1);
	return (0);
}

int	check_not_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (-1);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] == '-' || str[i] == '+')
			return (-1);
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}
