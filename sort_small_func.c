/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_func.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:05:01 by meaydino          #+#    #+#             */
/*   Updated: 2025/01/27 12:05:02 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_small_a(t_stack *s)
{
	if (s->a[0] > s->a[1])
	{
		if (s->b[0] < s->b[1])
			ss(s);
		else
			sa(s);
	}
	return (1);
}

int	ft_sort_small_a2(t_stack *s, int len)
{
	while (len != 3 || !(s->a[0] < s->a[1]
			&& s->a[1] < s->a[2]))
	{
		if (len == 3 && s->a[0] > s->a[1] && s->a[2])
		{
			if ((s->a[0] > s->a[1]) && (s->b[0] < s->b[1]))
				ss(s);
			else
				sa(s);
		}
		else if (len == 3 && !(s->a[2] > s->a[0]
				&& s->a[2] > s->a[1]))
			len = ft_push(s, len, 0);
		else if (s->a[0] > s->a[1])
			sa(s);
		else if (len++)
			pa(s);
	}
	return (1);
}

int	ft_sort_small_b(t_stack *s, int len)
{
	if (len == 2)
	{
		if (s->b[0] < s->b[1])
			sb(s);
		pa(s);
		pa(s);
	}
	else if (len == 3)
	{
		while (len || !(s->a[0] < s->a[1] && s->a[1] < s->a[2]))
		{
			if (len == 1 && s->a[0] > s->a[1])
				sa(s);
			else if (len == 1 || (len >= 2 && s->b[0] > s->b[1])
				|| (len == 3 && s->b[0] > s->b[2]))
				len = ft_push(s, len, 1);
			else
				sb(s);
		}
	}
	return (1);
}
