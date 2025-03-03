/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:04:45 by meaydino          #+#    #+#             */
/*   Updated: 2025/01/27 17:00:39 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	pb(t_stack *s)
{
	int	i;

	i = 0;
	if (s->size_a)
	{
		s->size_b++;
		i = s->size_b;
		while (--i > 0)
			s->b[i] = s->b[i - 1];
		s->b[0] = s->a[0];
		i = -1;
		s->size_a--;
		while (++i < s->size_a)
			s->a[i] = s->a[i + 1];
		write(1, "pb\n", 3);
	}
}

void	sb(t_stack	*s)
{
	int	tmp;

	tmp = 0;
	if (s->size_b < 2)
		return ;
	tmp = s->b[0];
	s->b[0] = s->b[1];
	s->b[1] = tmp;
	write(1, "sb\n", 3);
}

void	rb(t_stack	*s)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = s->b[i];
	i++;
	while (i < s->size_b)
	{
		s->b[i - 1] = s->b[i];
		i++;
	}
	s->b[i - 1] = tmp;
	write(1, "rb\n", 3);
}

void	rrb(t_stack *s)
{
	int	tmp;
	int	i;

	if (s->size_b > 0)
	{
		i = s->size_b - 1;
		tmp = s->b[i];
		while (i)
		{
			s->b[i] = s->b[i - 1];
			i--;
		}
		s->b[i] = tmp;
		write(1, "rrb\n", 4);
	}
}
