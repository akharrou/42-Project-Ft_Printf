/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 16:20:29 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/25 23:29:53 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "stdint_42.h"

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# define ISPRINT(c) (c >= 32 && c <= 126)

# define STDIN  0
# define STDOUT 1
# define STDERR 2

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# define BINARY_BASE "01"
# define OCTAL_BASE "01234567"
# define DECIMAL_BASE "0123456789"
# define HEX_LOWER_BASE "0123456789abcdef"
# define HEX_UPPER_BASE "0123456789ABCDEF"

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

void		ft_bzero(void *str, size_t n);
void		*ft_memalloc(size_t size);
void		*ft_memset(void *dst, int c, size_t n);
char		*ft_padding(int padding, char pad);

int			valid_base(char *base_str);

size_t		ft_intmaxlen_base(intmax_t n, unsigned int base);
size_t		ft_uintmaxlen_base(uintmax_t n, unsigned int base);

int			ft_atoi(const char *str);

char		*ft_itoa_base(intmax_t n, char *base, int precision);
char		*ft_utoa_base(uintmax_t n, char *base, int precision);
char		*ft_ftoa_base(long double n, char *base, int width, int precision);

size_t		ft_intlen(int n);
size_t		ft_strlen(const char *str);
size_t		ft_strnlen(const char *s, size_t maxlen);
int			ft_strcmp(const char *str1, const char *str2);
char		*ft_strcat(char *dst, const char *src);
char		*ft_strncat(char *dst, const char *src, size_t n);
char		*ft_strchr(const char *str, int c);
char		*ft_strdup(const char *str);
char		*ft_strndup(const char *src, size_t n);
char		*ft_strdup_range(const char *str, int index, int end);
char		*ft_strnew(size_t size);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcpy(char *dst, const char *src);
char		**ft_strsplit(char const *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoinfre(char const *s1, char const *s2,
			int free_s1, int free_s2);
char		*ft_strappend(char const *s1, char const *s2,
			int free_s1, int free_s2);
char		*ft_strprepend(char const *s1, char const *s2,
			int free_s1, int free_s2);
char		*ft_strnjoin(char const *dst, char const *src, size_t len);
char		*ft_strnjoinfre(char const *dst, char const *src, size_t len,
			int free_str);
char		*ft_strnappend(char const *dst, char const *src, size_t len,
			int free_str);
char		*ft_strnprepend(char const *dst, char const *src, size_t len,
			int free_str);

int			ft_ischarset(int c, const char *seperators);

long double	ft_round(long double n);
long double	ft_round_with_prior(long double n);
long double	ft_powl(long double x, long double y);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
