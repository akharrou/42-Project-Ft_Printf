/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:41:20 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/25 23:55:44 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_vdprintf(int filedes, const char *format, va_list *args)
{
	int32_t		tt_bytes;
	char		*fstr;
	size_t		len;

	tt_bytes = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			fstr = fstring(&format, args, &len);
			if (!fstr)
				return (-1);
			tt_bytes += write(filedes, fstr, len);
			free(fstr);
		}
		else
			tt_bytes += write(filedes, format++, 1);
	}
	va_end(*args);
	return (tt_bytes);
}
