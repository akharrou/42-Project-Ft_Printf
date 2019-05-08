/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 08:42:20 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/07 13:24:59 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_pow(double x, double y)
{
	double	val;
	double	sign;

	if (y == 0)
		return (1.0);
	sign = (x < 0) ? -1.0 : 1.0;
	x = (x < 0) ? (-x) : (x);
	val = x;
	if (y < 0)
	{
		y = -y;
		while (--y > -2)
			val /= x;
	}
	else
	{
		while (--y > 0)
			val *= x;
	}
	return (val * sign);
}
