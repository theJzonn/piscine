/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:25:38 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/13 15:02:54 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int y;

	i = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0' && str[y] != '\0')
	{
		if (str[i] == to_find[y])
		{
			if (to_find[y + 1] == '\0')
				return (&str[i - y]);
			y++;
		}
		else
			y = 0;
		i++;
	}
	return (0);
}
