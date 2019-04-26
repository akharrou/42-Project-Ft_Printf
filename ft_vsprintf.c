/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:41:59 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/26 00:17:26 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_vsprintf(char *str, const char *format, va_list *args)
{
	char		*fstr;
	char		*cur;
	size_t		len;

	if (!format)
		return (0);
	cur = str;
	while (*format)
	{
		if (*format == '%')
		{
			fstr = fstring(&format, args, &len);
			if (!fstr)
				return (-1);
			cur = ft_strncpy(cur, fstr, len);
			cur += len;
			free(fstr);
		}
		else
			cur = ft_strncpy(cur++, format++, 1);
	}
	va_end(*args);
	(*cur) = '\0';
	return (cur - str);
}
