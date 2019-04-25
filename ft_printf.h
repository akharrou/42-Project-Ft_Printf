/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 01:21:59 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/25 08:12:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# include "Libft/libft.h"
# include <stdarg.h>

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

typedef struct	s_format_info
{
	int8_t		flags;
	int32_t		width;
	int32_t		precision;
	int8_t		length;
	int8_t		specifier;
	char		**style;
	t_data		data;
	char		pad;
	int8_t		format_length;
}				t_format;

typedef struct	s_handler
{
	char		specifier;
	char		*(*handler)(t_format format);
}				t_handler;

typedef struct	s_style
{
	char		*style;
	char		*ansi_code;
}				t_style;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# define NONE (-1)

enum	e_flags
{
	MINUS = (1 << 0),
	PLUS = (1 << 1),
	SPACE = (1 << 2),
	HASH = (1 << 3),
	ZERO = (1 << 4)
};

enum	e_lengths
{
	H = sizeof(int),
	HH = sizeof(char),
	L = sizeof(long int),
	LL = sizeof(long long int),
	LLL = sizeof(long double),
	IU_MAX = sizeof(intmax_t),
	SIZET = sizeof(size_t),
	PTRDIFF = sizeof(ptrdiff_t)
};

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

int				ft_printf(const char *format, ...);

char			**parse_style(const char *format, int8_t *i);
t_format		parse_format(const char *format, va_list *args);

int8_t			parse_flags(const char *format, int8_t *i);
int32_t			parse_width(const char *format, va_list *args, int8_t *i);
int32_t			parse_precison(const char *format, va_list *args, int8_t *i);
int8_t			parse_length(const char *format, int8_t *i);
int8_t			parse_specifier(const char *format, int8_t *i);

char			*apply_width(t_format format, char *str);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# define SPECIFIERS "csrpiufodxXb%"

char			*c_handler(t_format format);
char			*i_handler(t_format format);
char			*d_handler(t_format format);
char			*u_handler(t_format format);
char			*f_handler(t_format format);
char			*o_handler(t_format format);
char			*x_handler(t_format format);
char			*xx_handler(t_format format);
char			*b_handler(t_format format);
char			*s_handler(t_format format);
char			*r_handler(t_format format);
char			*p_handler(t_format format);
char			*mod_handler(t_format format);
char			*style_handler(t_format format, char *fstr);

char			*format_converter(const char **buf, va_list *args);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
