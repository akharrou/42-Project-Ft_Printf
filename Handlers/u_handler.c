/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:56:15 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/24 02:47:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         u_handler -- formatted unsigned number conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_char	*
**         u_handler(t_format format);
**
**    PARAMETERS
**
**         t_format format         Structure containing the variable
**                                 and information about how it must
**                                 be formatted.
**
**    DESCRIPTION
**         Handles the '%u' specifier like the libc 'printf()' function.
**
**         Note: the only flags and fields that apply to this specifier
**         are the following:
**
**             Flags: '-', '0'
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

t_char			*u_handler(t_format format)
{
	t_char		*intstr;

	intstr = (format.length < L && format.length != NONE) ?
		ft_utoa_base(format.data.uintgr, DECIMAL_BASE, format.precision) :
		ft_utoa_base(format.data.uintmax_t, DECIMAL_BASE, format.precision);
	format.width -= ft_strlen(intstr);
	intstr = apply_width(format, intstr);
	return (intstr);
}
