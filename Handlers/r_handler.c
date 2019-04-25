/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:51:50 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/25 08:09:03 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         r_handler -- formatted printable string conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         r_handler(t_format format);
**
**    PARAMETERS
**
**         t_format format         Structure containing the variable
**                                 and information about how it must
**                                 be formatted.
**
**    DESCRIPTION
**         Handles the '%r' specifier; prints a string of non-printable.
**         Non printable characters are printed as hexadecimal digits.
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

char			*r_handler(t_format format)
{
	char		*fstr;
	char		*tmp;
	int32_t 	i;

	tmp = (format.data.str == NULL) ?
		ft_strdup("(null)") :
		ft_strdup(format.data.str);
	if (format.precision != NONE)
		if (0 <= format.precision && format.precision < (long)ft_strlen(tmp))
			tmp[format.precision] = '\0';
	i = -1;
	fstr = NULL;
	if (format.data.str != NULL)
		while (tmp[++i] && i < format.precision)
			fstr = (ISPRINT(tmp[i])) ?
				ft_strappend(fstr, ft_strndup(tmp + i, 1), 1, 1) :
				ft_strappend(fstr, ft_strprepend(
						ft_itoa_base(tmp[i], HEX_LOWER_BASE, 2), "\\x", 1, 0),
					1, 1);
	else
		fstr = tmp;
	format.width -= ft_strlen(fstr);
	if (format.width > 0 && format.pad == ' ')
		fstr = apply_width(format, fstr);
	return (fstr);
}
