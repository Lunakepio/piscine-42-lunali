/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 22:34:52 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/22 22:37:48 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int size;
	int i;
	int c;

	size = 0;
	i = 0;
	while (str[size] != '\0')
		size++;
	while (i < size / 2)
	{
		c = str[i]
		str[i] = str[size - i - 1];
		str[size - i - 1] = c;
		i++;
	}
	return (str);
}
