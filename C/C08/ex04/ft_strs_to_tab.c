/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:16:19 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/20 19:03:12 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	while (src[i] != '\0')
		i++;
	size = i;
	str = malloc(sizeof(*str) * (size + 1));
	i = 0;
	while (i < size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;

	i = 0;
	if (ac < 1)
		tab = NULL;
	else
	{
		tab = malloc(sizeof(t_stock_str) * (ac + 2));
		while (i < ac)
		{
			tab[i].size = ft_strlen(av[i]);
			tab[i].str = av[i];
			tab[i].copy = ft_strdup(av[i]);
			i++;
		}
		tab[i].str = 0;
		tab[i].copy = 0;
	}
	return (tab);
}
