/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:57:14 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/06 16:06:50 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstrip(char const *s, char *charset)
{
	int		last;
	int		first;
	char	*stripped;

	if (s)
	{
		first = 0;
		while (s[first] && ft_ischarset(s[first], charset))
			++first;
		last = ft_strlen(s) - 1;
		while (last >= 0 && ft_ischarset(s[last], charset))
			--last;
		stripped = ft_strndup(s + first, (last + 1) - first);
		free((void *)s);
		return (stripped);
	}
	return (NULL);
}
