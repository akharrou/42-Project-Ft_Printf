/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:09:44 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/21 23:57:21 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_range(const char *str, int index, int end)
{
	int		i;
	char	*dst;

	if (!(dst = (char *)malloc(end - index + 1)))
		return (NULL);
	i = 0;
	while (index < end)
		dst[i++] = str[index++];
	dst[i] = '\0';
	return (dst);
}
