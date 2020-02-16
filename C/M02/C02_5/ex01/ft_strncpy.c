/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 10:26:37 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/09 14:50:08 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			while (i < n)
			{
				*(dest + i) = '\0';
				i++;
			}
			return (dest);
		}
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
