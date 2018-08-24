/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:30:35 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/20 23:21:39 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	unsigned int	i;
	int				*tabl;

	i = 0;
	if (min >= max)
		return (0);
	tabl = (int*)malloc(sizeof(*tabl) * (max - min));
	if (tabl == 0)
		return (0);
	while (min < max)
	{
		tabl[i] = min;
		min++;
		i++;
	}
	return (tabl);
}
