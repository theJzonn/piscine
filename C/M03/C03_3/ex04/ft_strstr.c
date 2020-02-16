/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:25:38 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/12 14:35:04 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int y;
	int start;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			start = i;
			y = 0;
			while (str[i] == to_find[y])
			{
				if (to_find[y + 1] == '\0')
					return (&str[start]);
				i++;
				y++;
			}
		}
		i++;
	}
	return (0);
}
