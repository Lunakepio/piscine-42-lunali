/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 18:25:06 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/22 19:21:43 by amoulinn         ###   ########.fr       */
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
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

char	print_bits(int nb)
{
	int i;
	int j;
	int nbpw;
	char *bin;

	i = 7;
	j = 0;
	while (i >= 0)
	{
		nbpw = 0;
		nbpw = ft_recursive_power(2, 7-i);
		if (nbpw <= nb)
		{
			nb = nb - nbpw;
			bin[j] = '1';
		}
		else if (nbpw > nb)
			bin[j] = '0';
		i--;
		j++;
	}
	ft_putstr(bin);
	return (bin);
}

int main(void)
{
	print_bits(255);
	return (0);
}
