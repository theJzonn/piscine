/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:47:43 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/14 14:46:32 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putchar2(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

#include <stdio.h>

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
			if (str[i] > 9 && str[i] < 16)
				ft_putchar('0');
			ft_putchar(base[str[i] % 10]);
		}
		else if (str[i] < 9)
		{
			ft_putchar(str[i] + 20);
			//printf("%c", str[i]);
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
