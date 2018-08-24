/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 20:36:34 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/04 11:10:16 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0' - 1;
	while (a <= '7')
	{
		b = a++ + 1;
		while (b <= '8')
		{
			c = b++ + 2;
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c++);
				if (a < '7' || b < '8' || c < '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
