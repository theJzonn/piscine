/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:54:28 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/19 15:11:22 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_sizestrs(char **strs, int size)
{
	int	sizestrs;
	int i;

	i = 0;
	sizestrs = 0;
	while (i < size)
	{
		sizestrs = sizestrs + ft_strlen(strs[i]);
		i++;
	}
	return (sizestrs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		sizestrs;
	int		i;

	sizestrs = ft_sizestrs(strs, size);
	if (size == 0)
		res = malloc(sizeof(*res));
	else
	{
		res = malloc(sizeof(*res) * sizestrs + (sizeof(*sep) * (size - 1)));
		res = strs[0];
		i = 1;
		while (i < size)
		{
			res = ft_strcat(res, strs[i]);
			if (i < size - 1)
				res = ft_strcat(res, sep);
			i++;
		}
	}
	return (res);
}
