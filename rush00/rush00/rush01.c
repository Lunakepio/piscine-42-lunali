/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 15:33:48 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/05 13:05:25 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_topline(int x)
{
	int	i;

	i = 3;
	ft_putchar('/');
	while (i <= x)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_midline(int x)
{
	int	i2;

	i2 = 3;
	ft_putchar('*');
	while (i2 <= x)
	{
		ft_putchar(' ');
		i2++;
	}
	if (x > 1)
	{
		ft_putchar('*');
	}
	i2 = 0;
	ft_putchar('\n');
}

void	ft_botline(int x)
{
	int	i4;

	i4 = 3;
	ft_putchar('\\');
	while (i4 <= x)
	{
		ft_putchar('*');
		i4++;
	}
	if (x > 1)
	{
		ft_putchar('/');
	}
}

void	rush(int x, int y)
{
	int	i3;

	i3 = 3;
	ft_topline(x);
	if (y > 1)
	{
		while (i3 <= y)
		{
			ft_midline(x);
			i3++;
		}
		ft_botline(x);
	}
}
