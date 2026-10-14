/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:37:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/07 15:37:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_data *data)
{
	if (data->size_a == 2 && data->a[0] > data->a[1])
		sa(data);
}

void	sort_three(t_data *data)
{
	int	max;

	if (data->size_a != 3)
		return ;
	max = max_index(data->a, data->size_a);
	if (max == 0)
		ra(data);
	else if (max == 1)
		rra(data);
	if (data->a[0] > data->a[1])
		sa(data);
}

void	sort_five(t_data *data)
{
	int	min;

	while (data->size_a > 3)
	{
		min = min_index(data->a, data->size_a);
		if (min <= data->size_a / 2)
		{
			while (min-- > 0)
				ra(data);
		}
		else
		{
			min = data->size_a - min;
			while (min-- > 0)
				rra(data);
		}
		pb(data);
	}
	sort_three(data);
	while (data->size_b > 0)
		pa(data);
}

int	min_index(int *arr, int size)
{
	int	index;
	int	i;

	index = 0;
	i = 1;
	while (i < size)
	{
		if (arr[i] < arr[index])
			index = i;
		i++;
	}
	return (index);
}

int	max_index(int *arr, int size)
{
	int	index;
	int	i;

	index = 0;
	i = 1;
	while (i < size)
	{
		if (arr[i] > arr[index])
			index = i;
		i++;
	}
	return (index);
}
