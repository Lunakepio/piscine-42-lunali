/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:08:45 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/23 12:31:42 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			j = str[i];
			while (j-- > 65)
				ft_putchar(str[i]);
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			j = str[i];
			while (j-- > 97)
				ft_putchar(str[i]);
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	repeat_alpha("abc j'effectue un test");
	return (0);
}
