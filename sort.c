/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:05:03 by meaydino          #+#    #+#             */
/*   Updated: 2025/02/10 11:47:59 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(int *stack_a, int size, int flag)
{
	int	i;

	i = 0;
	while ((flag == 0) && (++i < size))
	{
		if (stack_a[i - 1] > stack_a[i])
			return (0);
	}
	while ((flag == 1) && (++i < size))
	{
		if (stack_a[i - 1] < stack_a[i])
			return (0);
	}
	return (1);
}

int	ft_sort(t_stack *stack, int size)
{
	if (ft_is_sorted(stack->a, stack->size_a, 0) == 0)
	{
		if (size == 2)
			sa(stack);
		else if (size == 3)
			ft_sort_three(stack);
		else
			ft_first_seperation(stack, size);
	}
	return (0);
}

void	ft_check_repeat(t_stack *stack, int size, char **av, int control)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stack->a[i] == stack->a[j])
				ft_free_av(av, stack, control);
			j++;
		}
		i++;
		j = i + 1;
	}
}
