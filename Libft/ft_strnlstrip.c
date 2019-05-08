/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlstrip.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 18:25:23 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/07 18:25:23 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnlstrip(char const *s, char *charset, int n)
{
	int		first;
	char	*lstripped;

	if (s)
	{
		first = 0;
		while (n-- > 0 && s[first] && ft_ischarset(s[first], charset))
			++first;
		lstripped = ft_strdup(s + first);
		free((void *)s);
		return (lstripped);
	}
	return (NULL);
}
