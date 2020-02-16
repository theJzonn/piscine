/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 19:14:50 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/14 12:05:28 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	if (str[0] != '\0')
		write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	sort_tab(char **tab, int size)
{
	int		i;
	char	*temp;

	i = 0;
	temp = 0;
	while (i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	str = argv[0];
	if (argc > 1)
	{
		sort_tab(argv, argc);
		while (i < argc)
		{
			if (argv[i] != str)
				ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}
