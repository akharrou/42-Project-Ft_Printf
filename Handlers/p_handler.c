/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:52:39 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/25 08:21:22 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         p_handler -- formatted address conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         p_handler(t_format format);
**
**    PARAMETERS
**
**         t_format format         Structure containing the variable
**                                 and information about how it must
**                                 be formatted.
**
**    DESCRIPTION
**         Handles the '%p' specifier like the libc 'printf()' function.
**
**         Note: the only flags and fields that apply to this specifier
**         are the following:
**
**             Flags: '-'
**             Width: defined or '*'
**
**
**    RETURN VALUES
**         If successful, returns a formatted string that follows the
**         specified format; otherwise exits with a -1 on error.
*/

#include "../ft_printf.h"

char			*p_handler(t_format format)
{
	char		*addr;

	addr = ft_utoa_base(
		(uintmax_t)format.data.intptr_, HEX_LOWER_BASE, format.precision);
	addr = ft_strprepend(addr, "0x", 1, 0);
	format.width -= ft_strlen(addr);
	if (format.width > 0 && format.pad == ' ')
		addr = apply_width(format, addr);
	return (addr);
}
