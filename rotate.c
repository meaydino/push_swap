/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:35:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/07 15:35:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	shift_up(int *arr, int size)
{
	int	tmp;
	int	i;

	if (size < 2)
		return ;
	tmp = arr[0];
	i = 0;
	while (i < size - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[size - 1] = tmp;
}

void	ra(t_data *data)
{
	if (data->size_a < 2)
		return ;
	shift_up(data->a, data->size_a);
	write(1, "ra\n", 3);
}

void	rb(t_data *data)
{
	if (data->size_b < 2)
		return ;
	shift_up(data->b, data->size_b);
	write(1, "rb\n", 3);
}
