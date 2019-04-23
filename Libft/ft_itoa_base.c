/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:08:52 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/21 23:49:40 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(intmax_t n, char *base, int precision)
{
	unsigned short	intbase;
	unsigned short	col;
	intmax_t		val;
	char			*buf;

	if (!valid_base(base))
		return (NULL);
	col = ft_intmaxlen_base(n, ft_strlen(base));
	precision = ((precision - col > 0) ? precision - col : 0);
	col += precision + (n < 0);
	if (!(buf = malloc(col + 1)))
		return (NULL);
	buf = ft_memset(buf, '0', col);
	buf[col] = '\0';
	intbase = ft_strlen(base);
	val = (n < 0) ? -n : n;
	while (col - precision > 0)
	{
		buf[--col] = base[val % intbase];
		val /= intbase;
	}
	if (n < 0)
		(*buf) = '-';
	return (buf);
}
