/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoulinn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 22:42:22 by amoulinn          #+#    #+#             */
/*   Updated: 2018/08/23 11:59:25 by amoulinn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_words(char *str)
{
	int i;
	int a;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] <= ' ')
		i--; 
	while (str[i] > ' ')
		i--;
	i++;
	while (str[i] > ' ' && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	last_words("    eh stp normalement    c'est    LUI       ");
	return (0);
}
