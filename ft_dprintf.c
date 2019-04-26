/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:42:51 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/25 22:33:31 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_dprintf(int filedes, const char *format, ...)
{
	va_list		args;

	if (!format)
		return (0);
	va_start(args, format);
	return (ft_vdprintf(filedes, format, &args));
}
