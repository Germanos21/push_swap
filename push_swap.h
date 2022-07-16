/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:34:24 by gchernys          #+#    #+#             */
/*   Updated: 2022/07/15 15:17:45 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_elem
{
	struct s_elem	*next;
	int				a_score;
	int				b_score;
}		t_elem;

int			main(int argc, char **argv);
static int	not_digit(char *str);
void		act_sa(t_elem **head, int output);
void		act_sb(t_elem **head, int output);
void		act_ss(t_elem **head_a, t_elem **head_b, int output);
static void	act_ss_output(int flag);

#endif