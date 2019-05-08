/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_round.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 18:23:48 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/07 18:23:58 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bigint		bigint_round(t_bigint num, char *base, int prec)
{
	int32_t		decimals;
	char		*decpt;
	char		*rndr;

	num = ft_strdup(num);
	prec = (prec >= 0) ? prec : 6;
	if ((decpt = ft_strchr(num, '.')))
	{
		decimals = (ft_strlen(num) - 1) - (decpt - num);
		if (decimals > prec || prec == 0)
		{
			if (INT(*(decpt + prec + 1), base) >= (long)ft_strlen(base) / 2)
			{
				rndr = ft_dtoa_base(ft_pow(10, -prec), base, 0, prec);
				num = bigint_addfre(num, rndr, base, 3);
			}
		}
		else
			num = ft_strappend(num, ft_padding(prec - decimals, '0'), 1, 1);
		num[(ft_strchr(num, '.') - num) + ((prec) ? prec + 1 : 0)] = '\0';
	}
	else if (prec)
		num = ft_strappend(ft_strappend(num, ".", 1, 0),
				ft_padding(prec, '0'), 1, 1);
	return (num);
}

t_bigint		bigint_roundfre(t_bigint num, char *base, int precision,
					int free_num)
{
	t_bigint	res;

	res = bigint_round(num, base, precision);
	if (free_num && num)
		free((void *)num);
	return (res);
}
