/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:17:26 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/25 08:46:28 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_printf -- formatted output conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_printf(const char *format, ...);
**
**    PARAMETERS
**
**         const char *format        C string that contains the text to be
**                                   written to stdout and/or embedded format
**                                   specifiers that are replaced by values
**                                   specified in subsequent additional
**                                   arguments and formatted as requested.
**
**         ...                       (Additional arguments)
**
**    DESCRIPTION
**         Reproduction of the libc 'printf()' function.
**
**    RETURN VALUES
**         If successful, the total number of characters written is returned.
*/

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list		args;
	char		*fstr;
	int32_t		tt_bytes_written;

	tt_bytes_written = 0;
	if (format != NULL)
	{
		va_start(args, format);
		while (*format != '\0')
		{
			if (*format == '%')
			{
				fstr = format_converter(&format, &args);
				if (!fstr)
					exit(-1);
				tt_bytes_written += write(STDOUT, fstr, ft_strlen(fstr));
				free(fstr);
			}
			else
				tt_bytes_written += write(STDOUT, format++, 1);
		}
		va_end(args);
	}
	return (tt_bytes_written);
}

/*
**    NAME
**         ft_fprintf -- formatted output conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_fprintf(int filedes, const char *format, ...);
**
**    PARAMETERS
**
**         const char *format        C string that contains the text to be
**                                   written to stdout and/or embedded format
**                                   specifiers that are replaced by values
**                                   specified in subsequent additional
**                                   arguments and formatted as requested.
**
**         ...                       (Additional arguments)
**
**    DESCRIPTION
**         Reproduction of the libc 'fprintf()' function.
**
**    RETURN VALUES
**         The total number of characters written is returned.
*/

int		ft_fprintf(int filedes, const char *format, ...)
{
	va_list		args;
	char		*fstr;
	int32_t		tt_bytes_written;

	if (!format)
		return (0);
	tt_bytes_written = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			fstr = format_converter(&format, &args);
			tt_bytes_written += write(
				filedes, fstr, ft_strlen(fstr));
			free(fstr);
		}
		else
			tt_bytes_written += write(filedes, format++, 1);
	}
	va_end(args);
	return ((int)tt_bytes_written);
}

/*
**    NAME
**         ft_sprintf -- formatted output conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_sprintf(char *str, const char *format, ...);
**
**    PARAMETERS
**
**         const char *format        C string that contains the text to be
**                                   written to stdout and/or embedded format
**                                   specifiers that are replaced by values
**                                   specified in subsequent additional
**                                   arguments and formatted as requested.
**
**         ...                       (Additional arguments)
**
**    DESCRIPTION
**         Reproduction of the libc 'sprintf()' function.
**
**    RETURN VALUES
**         The total number of characters stored is returned.
*/

int		ft_sprintf(char *str, const char *format, ...)
{
	va_list		args;
	char		*fstr;
	char		*tmp;

	(str) = NULL;
	if (!format)
		return (-1);
	fstr = ft_strdup("");
	if (!fstr)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (fstr)
			tmp = fstr;
		fstr = (*format == '%') ?
			ft_strjoin(fstr, format_converter(&format, &args)) :
			ft_strjoin(fstr, &(*format++));
		free(tmp);
		if (!fstr)
			return (-1);
	}
	va_end(args);
	(str) = (char *)fstr;
	return ((int)ft_strlen(fstr));
}
