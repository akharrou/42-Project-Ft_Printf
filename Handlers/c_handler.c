/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:52:40 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/27 12:55:07 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         c_handler -- formatted character conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         c_handler(t_format format, t_data arg);
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
**         Handles the '%c' specifier like the libc 'printf()' function.
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

#define CHARACTER 1
#define SENTINAL 1

char			*c_handler(t_format format, t_data arg)
{
	char		*charstr;
	size_t		len;

	if (format.width)
		format.width -= CHARACTER;
	len = CHARACTER + format.width;
	charstr = malloc(len + SENTINAL);
	if (!charstr)
		exit(-1);
	if (!format.width || (format.width && format.flags & MINUS))
		charstr[0] = arg.char_;
	else
		charstr[format.width] = arg.char_;
	charstr[len] = '\0';
	if (format.width)
		(format.flags & MINUS) ?
			ft_memset(charstr + 1, ' ', format.width) :
			ft_memset(charstr, ' ', format.width);
	return (charstr);
}
