/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 14:56:19 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/10 14:57:38 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char c)
{
	if ((c < 'A' || c > 'z') || (c > 'Z' && c < 'a'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(str[i]) && !ft_str_is_alpha(str[i - 1]))
		{
			if (str[i] >= '0' && str[i] <= '9')
				str[i] = str[i];
			else
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
