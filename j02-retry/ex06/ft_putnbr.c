/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 12:17:09 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/04 00:30:15 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	    write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	int i;
	
	int b;
	b = a;
	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
	}
	i = 1;
	while (b >= 10)
	{
		b = b / 10;
		i = i * 10;
	}
	while (a >= 0)
	{
		ft_putchar((a / i) + '0');
	//	i = i / 10;
		a = a % i;
	}
}

int	main()
{
ft_putnbr(123);
return 0;
}	
