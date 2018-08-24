/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 08:52:41 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/23 22:30:38 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int c;

	i = 0;
	j = 1;
	while (tab[i] < size && tab[j] < size - 1)
	{
		if (tab[i] < tab[j])
		{
			c = tab[i];
			tab[i] = tab[j];
			tab[j] = c;
			i = 0;
			j = 1;ft_sort_integer_table
		}
		else
		{
			i++;
			j++;
		}
	}
}
