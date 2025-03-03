/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:05:35 by meaydino          #+#    #+#             */
/*   Updated: 2025/02/10 13:03:53 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}		t_stack;

void	ft_free_av(char **av, t_stack *stack, int control);
void	ft_error(t_stack *stack);
void	ft_free(t_stack *stack);

void	ft_push_swap(char **av, int control);

void	ft_first_seperation(t_stack *stack, int len);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);

void	pa(t_stack *stack);
void	sa(t_stack *stack);
void	ra(t_stack *stack);
void	rra(t_stack *stack);

void	pb(t_stack *stack);
void	sb(t_stack *stack);
void	rb(t_stack *stack);
void	rrb(t_stack *stack);

void	ss(t_stack *stack);
void	rr(t_stack *stack);
void	rrr(t_stack *stack);

int		ft_push(t_stack *stack, int len, int operation);
int		ft_sort_three(t_stack *s);
void	ft_bubble_sort(int *tmp_stack, int size);
int		ft_get_middle(int *pivot, int *stack_a, int size);

int		ft_sort_small_a(t_stack *s);
int		ft_sort_small_a2(t_stack *s, int len);
int		ft_sort_small_b(t_stack *s, int len);

int		ft_is_sorted(int *stack_a, int size, int flag);
int		ft_sort(t_stack *stack, int size);
void	ft_check_repeat(t_stack *stack, int size, char **av, int control);

int		ft_ps_strlen(char **str);
int		ft_ps_atoi(char *str, t_stack *stack, char **av, int control);

#endif
