/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:29:53 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/17 15:08:00 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

unsigned int	count_words(char *str)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i] <= ' ' && str[i])
			i++;
		if (str[i] > ' ' && str[i])
			n++;
		while (str[i] > ' ')
			i++;
	}
	return (n);
}

int				ft_strlen(char *str)
{
	int i;

	i = 1;
	while (str[i] != '\0' && ft_is_space(str[i]) == 0)
		i++;
	return (i);
}

void			ft_strcpy(char *tab, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && ft_is_space(str[i]) == 0)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
}

char			**ft_split_whitespaces(char *str)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	nbmots;
	unsigned int	size;
	char			**tab;

	i = 0;
	j = 0;
	nbmots = count_words(str);
	tab = (char**)malloc(sizeof(char*) * (nbmots) + 1);
	while (str[i])
	{
		while (ft_is_space(str[i]) == 1)
			i++;
		if (str[i] != '\0')
		{
			size = ft_strlen(str + i);
			tab[j] = malloc(sizeof(*tab[j]) * (size + 1));
			ft_strcpy(tab[j], str + i);
			i = size + i;
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}
