/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 19:25:15 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/23 23:33:12 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void dectobin(unsigned char nb)
{
	int i;
	char tab[9];

	i = 7;
	while (i >= 0)
	{
		if (nb & 1)
			tab[i] = '1';
		else
			tab[i] = '0';
		nb >>= 1;
		i--;
	}
	tab[8] = 0;
	ft_putstr(tab);
	ft_putstr("\n");
}

int main(void)
{
	dectobin(101);
}
