/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:22:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/07 15:22:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **numbers)
{
	int	i;

	if (!numbers)
		return ;
	i = 0;
	while (numbers[i])
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
}

void	free_data(t_data *data)
{
	if (!data)
		return ;
	if (data->a)
	{
		free(data->a);
		data->a = NULL;
	}
	if (data->b)
	{
		free(data->b);
		data->b = NULL;
	}
}

void	error_exit(t_data *data, char **numbers)
{
	if (numbers)
		free_split(numbers);
	if (data)
		free_data(data);
	write(2, "Error\n", 6);
	exit(1);
}

int	is_sorted(t_data *data)
{
	int	i;

	if (data->size_a <= 1)
		return (1);
	i = 0;
	while (i < data->size_a - 1)
	{
		if (data->a[i] > data->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
