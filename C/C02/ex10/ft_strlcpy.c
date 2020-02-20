/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:53:07 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/14 12:45:59 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				y;

	i = 0;
	y = 0;
	if (src[0] == '\0')
		return (0);
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
