/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:22:00 by meaydino          #+#    #+#             */
/*   Updated: 2026/10/07 15:22:00 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_valid_number(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static long	ft_atol(const char *str)
{
	long	num;
	int		sign;
	int		i;

	num = 0;
	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		if ((sign == 1 && num > INT_MAX) || (sign == -1 && (-num) < INT_MIN))
			return ((long)INT_MAX + 100);
		i++;
	}
	return (num * sign);
}

static int	count_total_elements(int ac, char **av)
{
	int		i;
	int		j;
	int		total;
	char	**split;

	i = 1;
	total = 0;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		if (!split || !split[0])
		{
			free_split(split);
			return (-1);
		}
		j = 0;
		while (split[j])
		{
			total++;
			j++;
		}
		free_split(split);
		i++;
	}
	return (total);
}

static void	process_token(t_data *data, char *token, char **split)
{
	long	val;
	int		i;

	if (!is_valid_number(token))
		error_exit(data, split);
	val = ft_atol(token);
	if (val < INT_MIN || val > INT_MAX)
		error_exit(data, split);
	i = -1;
	while (++i < data->size_a)
	{
		if (data->a[i] == (int)val)
			error_exit(data, split);
	}
	data->a[data->size_a] = (int)val;
	data->size_a++;
}

void	parser(int ac, char **av, t_data *data)
{
	int		i;
	int		j;
	char	**numbers;

	data->total = count_total_elements(ac, av);
	if (data->total <= 0)
		error_exit(data, NULL);
	data->a = (int *)malloc(sizeof(int) * data->total);
	data->b = (int *)malloc(sizeof(int) * data->total);
	if (!data->a || !data->b)
		error_exit(data, NULL);
	data->size_a = 0;
	data->size_b = 0;
	i = 1;
	while (i < ac)
	{
		numbers = ft_split(av[i], ' ');
		if (!numbers)
			error_exit(data, NULL);
		j = 0;
		while (numbers[j])
			process_token(data, numbers[j++], numbers);
		free_split(numbers);
		i++;
	}
}
