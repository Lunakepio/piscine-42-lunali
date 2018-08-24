/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 12:45:36 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/12 13:37:23 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	used_in_row(char **grid, unsigned int row, char n)
{
	int c;

	c = 0;
	while (c < 9)
	{
		if (grid[row][c] == n)
			return (1);
		c++;
	}
	return (0);
}

int	used_in_column(char **grid, unsigned int column, char n)
{
	int c;

	c = 0;
	while (c < 9)
	{
		if (grid[c][column] == n)
			return (1);
		c++;
	}
	return (0);
}

int	used_in_box(char **grid, unsigned int row, unsigned int column, char n)
{
	int c;
	int a;

	c = 0;
	a = 0;
	while (c < 3)
	{
		while (a < 3)
		{
			if (grid[row + c][column + a] == n)
				return (1);
			a++;
		}
		c++;
	}
	return (0);
}

int	is_safe(char **grid, unsigned int row, unsigned int column, char n)
{
	if (used_in_row(grid, row, n) == 0)
	{
		if (used_in_column(grid, column, n) == 0)
		{
			if (used_in_box(grid, row - (row % 3),
					column - (column % 3), n) == 0)
				return (1);
		}
	}
	return (0);
}
