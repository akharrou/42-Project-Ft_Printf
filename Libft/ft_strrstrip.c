/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstrip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:57:42 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/06 16:05:34 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrstrip(char const *s, char *charset)
{
	int		last;
	char	*rstripped;

	if (s)
	{
		last = ft_strlen(s) - 1;
		while (last >= 0 && ft_ischarset(s[last], charset))
			--last;
		rstripped = ft_strndup(s, last + 1);
		free((void *)s);
		return (rstripped);
	}
	return (NULL);
}
