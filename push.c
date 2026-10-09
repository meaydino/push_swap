/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:35:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/07 15:35:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *data)
{
	int	val;
	int	i;

	if (data->size_b <= 0)
		return ;
	val = data->b[0];
	i = 0;
	while (i < data->size_b - 1)
	{
		data->b[i] = data->b[i + 1];
		i++;
	}
	data->size_b--;
	i = data->size_a;
	while (i > 0)
	{
		data->a[i] = data->a[i - 1];
		i--;
	}
	data->a[0] = val;
	data->size_a++;
	write(1, "pa\n", 3);
}

void	pb(t_data *data)
{
	int	val;
	int	i;

	if (data->size_a <= 0)
		return ;
	val = data->a[0];
	i = 0;
	while (i < data->size_a - 1)
	{
		data->a[i] = data->a[i + 1];
		i++;
	}
	data->size_a--;
	i = data->size_b;
	while (i > 0)
	{
		data->b[i] = data->b[i - 1];
		i--;
	}
	data->b[0] = val;
	data->size_b++;
	write(1, "pb\n", 3);
}
