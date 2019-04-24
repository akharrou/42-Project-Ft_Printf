/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:52:28 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/24 02:46:42 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         f_handler -- formatted floating point number conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_char	*
**         f_handler(t_format format);
**
**    PARAMETERS
**
**         t_format format         Structure containing the variable
**                                 and information about how it must
**                                 be formatted.
**
**    DESCRIPTION
**         Handles the '%f' specifier like the libc 'printf()' function.
**
**         Note: the only flags and fields that apply to this specifier
**         are the following:
**
**             Flags: '-', '+', ' ', '0'
**             Width: defined or '*'
**             Precision: defined or '*'
**             Length: 'L'
**
**
**    RETURN VALUES
**         If successful, returns a formatted string that follows the
**         specified format; otherwise exits with a -1 on error.
*/

#include "../ft_printf.h"

t_char			*f_handler(t_format format)
{
	t_char		*fltstr;

	fltstr = ft_ftoa_base(
		(long double)format.data.dble, DECIMAL_BASE, -1, format.precision);
	if (format.flags & PLUS && !ft_strchr(fltstr, '-'))
		fltstr = ft_strprepend(fltstr, "+", 1, 0);
	if (format.flags & SPACE && !ft_strchr(fltstr, '-'))
		fltstr = ft_strprepend(fltstr, " ", 1, 0);
	return (fltstr);
}
	// format.width -= ft_strlen(fstr);
	// if (format.width > 0)
	// 	fstr = apply_width(format, fstr);


	// intmax_t	temp;
	// t_int8		sign;
	// t_char		*intstr;

	// temp = (format.length < L) ? format.data.intgr : format.data.intmax_t;
	// sign = (temp < 0);
	// intstr = ft_strdup("");
	// if (!(format.precision == 0 && temp == 0))
	// {
	// 	temp = (temp < 0) ? -temp : temp;
	// 	intstr = ft_strappend(
	// 		intstr, ft_utoa_base(temp, DECIMAL_BASE, format.precision), 1, 1);
	// 	format.width -= ft_strlen(intstr) +
	// 		(sign || (format.flags & PLUS || format.flags & SPACE) ? 1 : 0);
	// }
	// if (format.width && format.pad == '0')
	// 	intstr = apply_width(format, intstr);
	// intstr = (sign) ? ft_strprepend(intstr, "-", 1, 0) : intstr;
	// if (format.flags & PLUS && !sign)
	// 	intstr = ft_strprepend(intstr, "+", 1, 0);
	// if (format.flags & SPACE && !(format.flags & PLUS) && !sign)
	// 	intstr = ft_strprepend(intstr, " ", 1, 0);
	// if (format.width && format.pad != '0')
	// 	intstr = apply_width(format, intstr);
