/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:34:24 by gchernys          #+#    #+#             */
/*   Updated: 2022/11/09 17:58:04 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_moves
{
	int	direction;
	int	step;
}			t_moves;

typedef struct s_swplst
{
	int				data;
	int				index;
	int				pos;
	struct s_swplst	*next;
}	t_swplst;

void		swap_sa(t_swplst **a_stk, int flag);
void		swap_sb(t_swplst **b_stk, int flag);
void		swap_ss(t_swplst **a_stk, t_swplst **b_stk, int flag);
void		swap_pa(t_swplst **a_stk, t_swplst **b_stk);
void		swap_pb(t_swplst **a_stk, t_swplst **b_stk);
void		swap_rra(t_swplst **a_stk, int flag);
void		swap_rrb(t_swplst **b_stk, int flag);
void		swap_rrr(t_swplst **a_stk, t_swplst **b_stk, int flag);
void		swap_ra(t_swplst **a_stk, int flag);
void		swap_rb(t_swplst **b_stk, int flag);
void		swap_rr(t_swplst **b_stk, t_swplst **a_stk, int flag);

int			ft_lstsize_ps(t_swplst	*head);
void		node_del(t_swplst **head);
int			push_to_stack(char *str, t_swplst **stack_ptr);
void		push(t_swplst **head, int new_data, int new_index, int position);
int			check_rep_num(t_swplst **a_stk);
t_swplst	*find_smallest_node(t_swplst *head, int *array, int arr_len);
void		free_stack(t_swplst **a_stk);
t_swplst	*lstlast_ps(t_swplst *head);
void		get_index(t_swplst *a_stk);
void		get_pos(t_swplst *a_stk, int length);
int			pos_error(int index, int *array, int size);
int			parse(int argc, char **argv, t_swplst **a_stk);
int			check_sort(t_swplst *a_stk);
int			find_min_val(t_swplst *a_stk);
int			size_of_chunk(int size);
int			check_error(int argc, char **argv, t_swplst **a_stk);
int			find_largest(t_swplst *head);
void		best_move(int size, int i, t_moves *move);
int			check_not_num(char *str);
int			error_atoi(void);
int			check_size_of_num(char *str);
int			ps_atoi(char *str, t_swplst *a_stk);

void		sort(t_swplst **a_stk, t_swplst **b_stk, int size);
void		minisort_three(t_swplst **a_stk);
void		minisort_four(t_swplst **a_stk, t_swplst **b_stk);
void		minisort_five(t_swplst **a_stk, t_swplst **b_stk);
void		big_sort(t_swplst **a, t_swplst **b, int size);

#endif