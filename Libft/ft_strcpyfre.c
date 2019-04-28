/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpyfre.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:23:55 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/27 18:56:59 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpyfre(char *dst, const char *src, int free_dst, int free_src)
{
	char	*res;

	res = ft_strcpy(dst, src);
	if (free_dst && dst)
		free(dst);
	if (free_src && src)
		free((char *)src);
	return (res);
}
