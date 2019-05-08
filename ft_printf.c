/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:17:26 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 08:44:42 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Reproduction of the libc 'printf()' function.
*/

int				ft_printf(const char *format, ...)
{
	va_list		args;

	va_start(args, format);
	return (ft_vdprintf(STDOUT, format, &args));
}
