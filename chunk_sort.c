/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:40:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/09 15:40:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	index_stack(t_data *data)
{
	int	*tmp;
	int	i;
	int	j;
	int	count;

	tmp = malloc(sizeof(int) * data->size_a);
	if (!tmp)
		error_exit(data, NULL);
	i = -1;
	while (++i < data->size_a)
	{
		count = 0;
		j = -1;
		while (++j < data->size_a)
		{
			if (data->a[j] < data->a[i])
				count++;
		}
		tmp[i] = count;
	}
	i = -1;
	while (++i < data->size_a)
		data->a[i] = tmp[i];
	free(tmp);
}

static int	get_chunk_size(int size)
{
	if (size <= 100)
		return (15);
	return (30);
}

static void	push_to_b(t_data *data, int chunk)
{
	int	min;

	min = 0;
	while (data->size_a > 0)
	{
		if (data->a[0] <= min)
		{
			pb(data);
			rb(data);
			min++;
		}
		else if (data->a[0] <= min + chunk)
		{
			pb(data);
			min++;
		}
		else
			ra(data);
	}
}

static void	push_to_a(t_data *data)
{
	int	max;
	int	cnt;

	while (data->size_b > 0)
	{
		max = max_index(data->b, data->size_b);
		if (max <= data->size_b / 2)
		{
			while (max-- > 0)
				rb(data);
		}
		else
		{
			cnt = data->size_b - max;
			while (cnt-- > 0)
				rrb(data);
		}
		pa(data);
	}
}

void	sort_chunk(t_data *data)
{
	int	chunk;

	index_stack(data);
	chunk = get_chunk_size(data->size_a);
	push_to_b(data, chunk);
	push_to_a(data);
}
