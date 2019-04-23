/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:56:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/22 19:58:27 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         x_handler -- formatted hexadecimal number conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_char	*
**         x_handler(t_format format);
**
**    PARAMETERS
**
**         t_format format         Structure containing the variable
**                                 and information about how it must
**                                 be formatted.
**
**    DESCRIPTION
**         Handles the '%x' specifier like the libc 'printf()' function.
**
**         Note: the only flags and fields that apply to this specifier
**         are the following:
**
**             Flags: '-', '+', ' ', '0', '#'
**             Width: defined or '*'
**             Precision: defined or '*'
**             Length: 'hh', 'h', 'l', 'll', 'j', 'z', 't'
**
**
**    RETURN VALUES
**         If successful, returns a formatted string that follows the
**         specified format; otherwise exits with a -1 on error.
*/

#include "../ft_printf.h"

static t_char	*apply_width(t_format format, t_char *str)
{
	str = (format.flags & MINUS) ?
		ft_strappend(str, ft_padding(format.width, format.pad), 1, 1) :
		ft_strprepend(str, ft_padding(format.width, format.pad), 1, 1);
	return (str);
}

t_char	*x_handler(t_format format)
{
	intmax_t	temp;
	t_char		*intstr;

	temp = (format.length < L && format.length != NONE) ?
		format.data.intgr :
		format.data.intmax_t;
	intstr = ft_strdup("");
	if (!((format.precision == NONE && format.precision == 0) && !temp))
	{
		temp = (temp < 0) ? ~(-temp) + 1 : temp;
		intstr = ft_strjoinfre(
			intstr, ft_utoa_base(temp, HEX_LOWER_BASE, format.precision), 1, 1);
		if (format.flags & PLUS && !ft_strchr(intstr, '-'))
			intstr = ft_strprepend(intstr, "+", 1, 0);
		if (format.flags & SPACE && !ft_strchr(intstr, '-'))
			intstr = ft_strprepend(intstr, " ", 1, 0);
		format.width -= ft_strlen(intstr) + ((format.flags & HASH) ? 2 : 0);
	}
	if (format.width && !(format.flags & HASH))
		intstr = apply_width(format, intstr);
	if (format.flags & HASH && temp)
		intstr = ft_strprepend(intstr, "0x", 1, 0);
	if (format.width && (format.flags & HASH))
		intstr = apply_width(format, intstr);
	return (intstr);
}