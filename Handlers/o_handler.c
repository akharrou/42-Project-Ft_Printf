/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:56:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/22 01:13:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         o_handler -- formatted octal number conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_char	*
**         o_handler(t_format format);
**
**    PARAMETERS
**
**         t_format format         Structure containing the variable
**                                 and information about how it must
**                                 be formatted.
**
**    DESCRIPTION
**         Handles the '%o' specifier like the libc 'printf()' function.
**
**         Note: the only flags and fields that apply to this specifier
**         are the following:
**
**             Flags: '-', '+', ' ', '0', '#'
**             Width: defined or '*'
**             Precision: defined or '*'
**             Length: 'hh', 'h', 'l', 'll', 'j', 'z', 't'
**
**         PS: two's complement is used for negatives.
**
**    RETURN VALUES
**         If successful, returns a formatted string that follows the
**         specified format; otherwise exits with a -1 on error.
*/

#include "../ft_printf.h"

t_char	*o_handler(t_format format)
{
	intmax_t	temp;
	t_char		*intstr;

	temp = (format.length < L && format.length != NONE) ?
		format.data.intgr :
		format.data.intmax_t;
	if (temp < 0)
		temp = ~(-temp) + 1;
	intstr = ft_utoa_base(temp, OCTAL_BASE, format.precision);
	if (format.flags & PLUS && !ft_strchr(intstr, '-'))
		intstr = ft_strprepend(intstr, "+", 1, 0);
	if (format.flags & SPACE && !ft_strchr(intstr, '-'))
		intstr = ft_strprepend(intstr, " ", 1, 0);
	format.width -= ft_strlen(intstr) + ((format.flags & HASH) ? 1 : 0);
	if (format.width)
		intstr = (format.flags & MINUS) ?
			ft_strappend(intstr, ft_padding(format.width, format.pad), 1, 1) :
			ft_strprepend(intstr, ft_padding(format.width, format.pad), 1, 1);
	if (format.flags & HASH && temp)
		intstr = ft_strprepend(intstr, "0", 1, 0);
	return (intstr);
}
