/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:35:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/07 15:35:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	shift_down(int *arr, int size)
{
	int	tmp;
	int	i;

	if (size < 2)
		return ;
	tmp = arr[size - 1];
	i = size - 1;
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[0] = tmp;
}

void	rra(t_data *data)
{
	if (data->size_a < 2)
		return ;
	shift_down(data->a, data->size_a);
	write(1, "rra\n", 4);
}

void	rrb(t_data *data)
{
	if (data->size_b < 2)
		return ;
	shift_down(data->b, data->size_b);
	write(1, "rrb\n", 4);
}
