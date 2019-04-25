/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:29:48 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/25 09:44:15 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**    Utility function.
*/

char			*apply_width(t_format format, char *str)
{
	return (
		(format.flags & MINUS) ?
			ft_strappend(str, ft_padding(format.width, format.pad), 1, 1) :
			ft_strprepend(str, ft_padding(format.width, format.pad), 1, 1));
}

/*
**    DESCRIPTION
**         Dispatch table associating every single format specifier to
**         its function (handler).
**
**         The idea was to make the hanlders sort of independant
**         plugins to the 'printf()' function, as opposed to
**         intertwined with it. For that reason, they are laid
**         out individually, and in seperate files.
*/

t_handler g_table[] =
{
	{    '%',    &mod_handler,    },
	{    'c',    &c_handler,      },
	{    'i',    &i_handler,      },
	{    'u',    &u_handler,      },
	{    'f',    &f_handler,      },
	{    'b',    &b_handler,      },
	{    'o',    &o_handler,      },
	{    'd',    &d_handler,      },
	{    'x',    &x_handler,      },
	{    'X',    &xx_handler,     },
	{    's',    &s_handler,      },
	{    'r',    &r_handler,      },
	{    'p',    &p_handler,      },
	{    '\0',   NULL,            }
};

/*
**    NAME
**         parse_style -- parse the 'style' field in the formatted string
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char **
**         parse_style(const char *format, int8_t *i);
**
**    PARAMETERS
**
**         const char *format      Formatted string.
**
**         int8_t *i               Current index in the formatted
**                                 string.
**
**    DESCRIPTION
**         Parses for the 'style' field in the formatted string.
**
**         We first check for an opening curly bracket. If there is
**         one, we will then look for its matching (closing) bracket.
**
**         If it is found we will parse out all the styles specified
**         in between the two brackets, storing them in a 2D array.
**         Finally the 2D array will be returned.
**
**    RETURN VALUES
**         If styles we're specified, then a 2D array containing them
**         will be returned; otherwise NULL is returned.
*/

char			**parse_style(const char *format, int8_t *i)
{
	char		**styles;
	char		*closing_bracket;

	styles = NULL;
	if (format[*i] == '{')
	{
		closing_bracket = ft_strchr(format, '}');
		if (closing_bracket)
		{
			format = ft_strndup(
						format + (*i) + 1,
						closing_bracket - (format + (*i) + 1));
			styles = ft_strsplit(format, ' ');
		}
		(*i) += ft_strlen(format) + 2;
		free((void *)format);
	}
	return (styles);
}

/*
**    NAME
**         parse_format -- parse out format
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_format
**         parse_format(const char *format, va_list *args);
**
**    PARAMETERS
**
**         const char *format        A formatted string.
**
**         va_list *args             A variable argument list.
**
**    DESCRIPTION
**         Extracts variable from the variable argument list, parses
**         out format and style of the format string and stores all
**         of that information in a (t_format) structure.
**
**    RETURN VALUES
**         The function returns a (t_format) structure containing
**         all the related information about the parsed out format
**         specifier and style.
*/

t_format		parse_format(const char *format)
{
	int8_t		i;
	t_format	info;

	i = 0;
	info = (t_format) {
		parse_flags(format, &i),
		parse_width(format, args, &i),
		parse_precison(format, args, &i),
		parse_length(format, &i),
		parse_specifier(format, &i),
		parse_style(format, &i),
		' ',
		i
	};
	return (info);
}

/*
**    NAME
**         format_converter -- formatted string conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char *
**         format_converter(const char **buf, va_list *args);
**
**    PARAMETERS
**
**         const char *format        A formatted string.
**
**         va_list *args             A variable argument list.
**
**    DESCRIPTION
**         Converts the specified format into the actual output
**         string.
**
**         First, the function parses out the format (& style).
**
**         If the format is incorrect, then the formatted string
**         is returned.
**
**         If the format is correct, the function will look for the
**         format specifier in the dispatch table and pass on the
**         task of the actual conversion to its associated function
**         (handler).
**
**         After the conversion is done, the converted string (output
**         string) is passed to the 'style_handler' (the stylist) to
**         be styled as specified (if specified).
**
**         Finally, the format string index is advanced by the format
**         length amount and the output string is returned.
**
**    RETURN VALUES
**         If the format is correctly specified, returns the converted
**         output string; otherwise returns the format string.
*/

char			*format_converter(const char **format, va_list *args)
{
	int32_t		i;
	t_data		arg;
	t_format	info;
	char		*fstr;

	fstr = NULL;
	info = parse_format((*format) + 1);
	if (info.specifier != 'f')
		arg = va_arg(*args, t_data);
	else
		arg.double_ = va_arg(*args, double);
	if (!ft_ischarset(info.specifier, "cf") &&
		info.precision == NONE &&
		info.flags & ZERO &&
		!(info.flags & MINUS))
	{
		info.pad = '0';
	}
	else if (info.flags & ZERO && !(info.flags & MINUS))
		info.pad = '0';
	if (info.specifier == NONE)
		return (ft_strndup((*format)++, 1));
	i = -1;
	while (g_table[++i].specifier != '\0')
	{
		if (info.specifier == g_table[i].specifier)
			fstr = style_handler(info, g_table[i].handler(info));
	}
	(*format) += info.format_length + 1;
	return (fstr);
}
