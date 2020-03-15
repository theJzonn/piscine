/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:21:30 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/27 16:12:34 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	char	c;

	if (ac == 4)
	{
		if (ft_strlen(av[2]) != 1)
		{
			ft_putstr("0\n");
			return (0);
		}
		c = av[2][0];
		if (c == '+' || c == '-' || c == 42
				|| c == '/' || c == '%')
			ft_do_op(av[1], av[3], c);
	}
	return (0);
}
