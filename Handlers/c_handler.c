/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:52:40 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/22 01:52:56 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         c_handler -- formatted character conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_char	*
**         c_handler(t_format format);
**
**    PARAMETERS
**
**         t_format format         Structure containing the variable
**                                 and information about how it must
**                                 be formatted.
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

t_char	*c_handler(t_format format)
{
	t_char	*character;

	if (format.data.chr == 0)
		character = ft_strdup("^@");
	else
	{
		character = malloc(2);
		if (!character)
			exit(-1);
		character[0] = format.data.chr;
		character[1] = '\0';
	}
	format.width -= ft_strlen(character) - (format.data.chr == 0);
	if (format.width > 0)
		character = (format.flags & MINUS) ?
		ft_strappend(character, ft_padding(format.width, format.pad), 1, 1) :
		ft_strprepend(character, ft_padding(format.width, format.pad), 1, 1);
	return (character);
}
