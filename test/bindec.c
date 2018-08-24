/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 00:29:47 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/24 07:11:06 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

int	bintodec(char *str)
{
	int i;
	int nb;

	i = 7;
	nb = 0;
	while (i >= 0)
	{
		nb = nb + (str[i] - '0') * ft_power(2, 7-i);
		i--;
	}
	printf("%i", nb);
   	return (nb);
}

int main()
{
	bintodec("00011001");
	return (0);
}
