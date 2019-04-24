/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:52:31 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/24 00:49:35 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         i_handler -- formatted signed number conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_char	*
**         i_handler(t_format format);
**
**    PARAMETERS
**
**         t_format format         Structure containing the variable
**                                 and information about how it must
**                                 be formatted.
**
**    DESCRIPTION
**         Handles the '%i' specifier like the libc 'printf()' function.
**
**         Note: the only flags and fields that apply to this specifier
**         are the following:
**
**             Flags: '-', '+', ' ', '0'
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

t_char	*i_handler(t_format format)
{
	intmax_t	temp;
	t_int8		sign;
	t_char		*intstr;

	temp = (format.length < L) ? format.data.intgr : format.data.intmax_t;
	sign = (temp < 0);
	intstr = ft_strdup("");
	if (!(format.precision == 0 && temp == 0))
	{
		temp = (temp < 0) ? -temp : temp;
		intstr = ft_strappend(
			intstr, ft_utoa_base(temp, DECIMAL_BASE, format.precision), 1, 1);
		format.width -= ft_strlen(intstr) +
			(sign || (format.flags & PLUS || format.flags & SPACE) ? 1 : 0);
	}
	if (format.width && format.pad == '0')
		intstr = apply_width(format, intstr);
	intstr = (sign) ? ft_strprepend(intstr, "-", 1, 0) : intstr;
	if (format.flags & PLUS && !sign)
		intstr = ft_strprepend(intstr, "+", 1, 0);
	if (format.flags & SPACE &&	!(format.flags & PLUS) && !sign)
		intstr = ft_strprepend(intstr, " ", 1, 0);
	if (format.width && format.pad != '0')
		intstr = apply_width(format, intstr);
	return (intstr);
}
