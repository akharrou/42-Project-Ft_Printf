/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:52:28 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/06 16:07:00 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         f_handler -- formatted floating point number conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         f_handler(t_format format, t_data arg);
**
**    PARAMETERS
**
**         t_format format     Structure containing the variable
**                             and information about how it must
**                             be formatted.
**
**         t_data arg          Argument pulled off of the 'va_list'.
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

char		*f_handler(t_format format, t_data arg)
{
	char	*fltstr;
	bool	sign;

	sign = (format.length == LLL) ?
		arg.ldbl_.body[9] >> 7 :
		arg.dbl_.body[7] >> 7;
	if (sign && format.length == LLL)
		arg.long_double_ = -arg.long_double_;
	else if (sign && format.length == NONE)
		arg.double_ = -arg.double_;
	fltstr = (format.length == LLL) ?
		ft_ldtoa_base(arg.long_double_, DECIMAL_BASE, 0, format.precision) :
		ft_ldtoa_base(arg.double_, DECIMAL_BASE, 0, format.precision);
	format.width -= ft_strlen(fltstr) +
		(sign || (format.flags & PLUS || format.flags & SPACE) ? 1 : 0);
	if (format.width && format.pad == '0')
		fltstr = apply_width(format, fltstr);
	fltstr = (sign) ? ft_strprepend(fltstr, "-", 1, 0) : fltstr;
	if (format.flags & PLUS && !sign)
		fltstr = ft_strprepend(fltstr, "+", 1, 0);
	if (format.flags & SPACE && !(format.flags & PLUS) && !sign)
		fltstr = ft_strprepend(fltstr, " ", 1, 0);
	if (format.width && format.pad != '0')
		fltstr = apply_width(format, fltstr);
	return (fltstr);
}
