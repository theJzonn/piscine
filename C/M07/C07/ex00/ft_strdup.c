/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 16:09:50 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/15 17:39:02 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		
	}
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;

	size = ft_strlen(src) + 1;
	str = malloc(sizeof(char) * size);
}
