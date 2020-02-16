/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 11:44:11 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/13 09:29:31 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 0;
	if (nb == 0 && power == 0)
		return (1);
	if (nb < 0)
		return (-1);
	if (power == 0)
		return (1);
	if (power == 0)
		res = nb;
	else
		res = nb;
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
