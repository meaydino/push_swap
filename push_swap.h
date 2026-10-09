/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:22:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/07 15:22:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_data
{
	int	*a;
	int	size_a;
	int	*b;
	int	size_b;
	int	total;
}	t_data;

int		is_sorted(t_data *data);
void	sort_two(t_data *data);
void	sort_three(t_data *data);
void	sort_five(t_data *data);



#endif
