/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llenotre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:34:00 by llenotre          #+#    #+#             */
/*   Updated: 2018/08/12 14:34:03 by llenotre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"

int	find_empty(char **grid, unsigned int *x, unsigned int *y)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid[i][j] == '.')
			{
				*x = i;
				*y = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	solve(char **grid)
{
	unsigned int	x;
	unsigned int	y;
	char			i;

	if (!find_empty(grid, &x, &y))
		return (1);
	i = '1';
	while (i <= '9')
	{
		if (is_safe(grid, x, y, i))
		{
			grid[x][y] = i;
			if (solve(grid))
				return (1);
			grid[x][y] = '.';
		}
		i++;
	}
	return (0);
}
