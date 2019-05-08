/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:43:09 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 08:44:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Reproduction of the libc 'sprintf()' function.
*/

int				ft_sprintf(char *str, const char *format, ...)
{
	va_list		args;

	va_start(args, format);
	return (ft_vsprintf(str, format, &args));
}
