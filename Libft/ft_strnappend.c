/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 23:27:19 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/25 23:31:03 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnappend(char const *dst, char const *src, size_t len,
			int free_str)
{
	return (ft_strnjoinfre(dst, src, len, free_str));
}
