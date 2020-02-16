/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 11:59:33 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/12 14:48:30 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int res;

	res = 0;
	if (nb == 0 && power == 0)
		return (1);
	if (nb < 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 0)
		res = nb;
	else
		res = nb;
	if (power == 0)
		return (1);
	return (res * ft_recursive_power(nb, power - 1));
}
