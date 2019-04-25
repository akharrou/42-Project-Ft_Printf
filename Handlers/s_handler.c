/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:51:50 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/25 07:07:41 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         s_handler -- formatted string conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         s_handler(t_format format);
**
**    PARAMETERS
**
**         t_format format         Structure containing the variable
**                                 and information about how it must
**                                 be formatted.
**
**    DESCRIPTION
**         Handles the '%s' specifier like the libc 'printf()' function.
**
**         Note: the only flags and fields that apply to this specifier
**         are the following:
**
**             Flags: '-'
**             Width: defined or '*'
**             Precision: defined or '*'
**
**
**    RETURN VALUES
**         If successful, returns a formatted string that follows the
**         specified format; otherwise exits with a -1 on error.
*/

#include "../ft_printf.h"

char			*s_handler(t_format format)
{
	char		*fstr;

	fstr = (format.data.str == NULL) ?
		ft_strdup("(null)") :
		ft_strdup(format.data.str);
	if (format.precision != NONE)
		if (0 <= format.precision && format.precision < (long)ft_strlen(fstr))
			fstr[format.precision] = '\0';
	format.width -= ft_strlen(fstr);
	if (format.width > 0 && format.pad == ' ')
		fstr = apply_width(format, fstr);
	return (fstr);
}
