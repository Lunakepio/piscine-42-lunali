/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:59:19 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/23 23:46:15 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int check(char *s2, char *sf, char n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == n)
		{
			while (sf[j] != '\0')
			{
				if (sf[j] == n)
					return (0);
				j++;
			}
			return (1);
		}
		i++;
	}
	return (0);
}


void	uniion(char *s1, char *s2)
{
	int i;
	int j;
	char sf[26];

	i = 0;
	j = 0;
	while (s1[i])
	{
		if ((check(s2, sf, s1[i]) == 1))
		{
			sf[j] = s1[i];
			ft_putchar(sf[j]);
			j++;
		}
		i++;
	}
	sf[j] = '\0';
}

int main()
{
	uniion("llo", "hellor");
	return (0);
}
