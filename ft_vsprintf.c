/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:41:59 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 08:45:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Reproduction of the libc 'vsprintf()' function.
*/

int				ft_vsprintf(char *str, const char *format, va_list *args)
{
	char		*fstr;
	size_t		pos;
	size_t		len;

	if (!format)
		return (0);
	pos = 0;
	while (*format)
	{
		if (*format == '%')
		{
			fstr = formatter(&format, args, &len);
			if (!fstr)
				return (-1);
			str = ft_strncat(str, fstr, len);
			pos += len;
			free(fstr);
		}
		else
			str[pos++] = *format++;
	}
	va_end(*args);
	str[pos] = '\0';
	return (pos);
}
