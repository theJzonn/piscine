/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 19:56:37 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/18 10:59:12 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	dests;
	unsigned int	srcs;

	i = 0;
	y = 0;
	dests = ft_strlen(dest);
	srcs = ft_strlen(src);
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0' && i < size - 1)
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	if (size > dests)
		return (dests + srcs);
	else
		return (size + srcs);
}
