/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:25:17 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/21 23:50:13 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_str;

	if (s1 || s2)
	{
		if (!(new_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		return (ft_strcat(ft_strcat(new_str, s1), s2));
	}
	return (NULL);
}
