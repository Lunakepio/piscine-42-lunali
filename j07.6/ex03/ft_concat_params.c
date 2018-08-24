/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 18:08:48 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/21 10:14:19 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		res;
	int		j;
	char	*strfinal;

	i = -1;
	j = 0;
	res = 0;
	while (++i < argc)
	{
		res = res + ft_strlen(argv[i]) + 1;
	}
	i = 1;
	strfinal = (char*)malloc(sizeof(char*) * (res) + 1);
	if (strfinal == NULL)
		return (0);
	while (i < argc)
	{
		strfinal = ft_strcat(strfinal, argv[i]);
		if (i != (argc - 1))
			strfinal = ft_strcat(strfinal, "\n");
		i++;
	}
	return (strfinal);
}
