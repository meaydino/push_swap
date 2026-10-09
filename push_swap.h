/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:22:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/07 15:22:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_data
{
	int	*a;
	int	size_a;
	int	*b;
	int	size_b;
	int	total;
}	t_data;

void	free_split(char **tab);
void	error_exit(t_data *data, char **split);
void	free_data(t_data *data);
int		is_sorted(t_data *data);
void	parser(int ac, char **av, t_data *data);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
int		min_index(int *arr, int size);
int		max_index(int *arr, int size);
void	sort_two(t_data *data);
void	sort_three(t_data *data);
void	sort_five(t_data *data);
void	sort_chunk(t_data *data);

#endif
