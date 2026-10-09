/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:22:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/07 15:22:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	start_struct(t_data *data)
{
	data->a = NULL;
	data->b = NULL;
	data->size_a = 0;
	data->size_b = 0;
	data->total = 0;
}

int	main(int ac, char **av)
{
	t_data	data;

	if (ac < 2)
		return (0);
	start_struct(&data);
	parser(ac, av, &data);
	if(!is_sorted(&data))
	{
		if(data.size_a == 2)
			sort_two(&data);
		else if (data.size_a == 3)
			sort_three(&data);
		else if (data.size_a <= 5)
			sort_five(&data);
	}
	free_data(&data);
	return (0);
}
