/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_cleaner.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 19:34:44 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/06 14:45:00 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bigint	bigint_cleaner(t_bigint number)
{
	int		i;

	i = 0;
	while (number[i] && number[i] != '.')
		++i;
	if (ft_strchr(number, '.'))
	{
		number = ft_strrstrip(number, "0");
		number = ft_strnlstrip(number, "0", i - 1);
	}
	else
		number = ft_strnlstrip(number, "0", i - 1);
	return (number);
}
