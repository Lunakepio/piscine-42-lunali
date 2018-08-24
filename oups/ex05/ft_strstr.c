/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:27:11 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/12 21:05:17 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int i2;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		i2 = 0;
		while (to_find[i2] == str[i + i2])
		{
			if (to_find[i2 + 1] == '\0')
				return (str + i);
			i2++;
		}
		i++;
	}
	return (0);
}
