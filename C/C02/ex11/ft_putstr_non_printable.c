/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:47:43 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/15 11:19:15 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	char *base;

	i = 0;
	base = "abcdef";
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] < 32)
		{
			write(1, "\\", 1);
			ft_putchar(str[i] / 10 + 48);
			if (str[i] > 9 && str[i] < 16)
				ft_putchar(base[str[i] % 10]);
			else if(str[i] <= 9)
				ft_putchar(str[i] + 48);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char *str = "Coucou\ttu vas bien ?";
	ft_putstr_non_printable(str);
}
