/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:35:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/07 15:35:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data)
{
	int	tmp;

	if (data->size_a < 2)
		return ;
	tmp = data->a[0];
	data->a[0] = data->a[1];
	data->a[1] = tmp;
	write(1, "sa\n", 3);
}
