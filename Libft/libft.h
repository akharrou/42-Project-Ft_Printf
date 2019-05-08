/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 18:24:13 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/07 18:24:14 by akharrou         ###   ########.fr       */
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

# define INT(c, base) (ft_strchr(base, c) - base)

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
char		*ft_padding(int size, char c);

int			valid_base(char *base_str);

size_t		ft_intmaxlen_base(intmax_t n, unsigned int base);
size_t		ft_uintmaxlen_base(uintmax_t n, unsigned int base);

int			ft_atoi(const char *str);

char		*ft_itoa(int n);
char		*ft_utoa_base(uintmax_t n, char *base, int precision);
char		*ft_itoa_base(intmax_t n, char *base, int precision);

char		*ft_dtoa_base(double n, char *base, int width, int precision);
char		*ft_ldtoa_base(long double n, char *base, int width, int precision);

double		ft_pow(double x, double y);

size_t		ft_intlen(int n);
size_t		ft_strlen(const char *str);
size_t		ft_strnlen(const char *s, size_t maxlen);
int			ft_strcmp(const char *str1, const char *str2);
char		*ft_strcat(char *dst, const char *src);
char		*ft_strncat(char *dst, const char *src, size_t n);
char		*ft_strcatfre(char *s1, const char *s2, int free_s1, int free_s2);
char		*ft_strchr(const char *str, int c);
char		*ft_strdup(const char *str);
char		*ft_strndup(const char *src, size_t n);
char		*ft_strndupfre(const char *src, size_t n, int free_src);
char		*ft_strdup_range(const char *str, int index, int end);
char		*ft_strnew(size_t size);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcpyfre(char *dst, const char *src, int free_dst,
			int free_src);
char		**ft_strsplit(char const *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoinfre(char const *s1, char const *s2,
			int free_s1, int free_s2);
char		*ft_strappend(char const *s1, char const *s2,
			int free_s1, int free_s2);
char		*ft_strprepend(char const *s1, char const *s2,
			int free_s1, int free_s2);
char		*ft_strnjoin(char const *s1, char const *s2, size_t len);
char		*ft_strnjoinfre(char const *s1, char const *s2, size_t len,
			int free_str);
char		*ft_strnappend(char const *s1, char const *s2, size_t len,
			int free_str);
char		*ft_strnprepend(char const *s1, char const *s2, size_t len,
			int free_str);
void		ft_swap_str(char **a, char **b);

char		*ft_strstrip(char const *s, char *charset);
char		*ft_strrstrip(char const *s, char *charset);
char		*ft_strnlstrip(char const *s, char *charset, int n);
char		*ft_strlstrip(char const *s, char *charset);

int			ft_ischarset(int c, const char *seperators);

t_bigint	bigint_mulfre(t_bigint num, int multiplier, char *base,
				int free_num);
t_bigint	bigint_divfre(t_bigint num, int divider, char *base,
				int free_num);
t_bigint	bigint_roundfre(t_bigint num, char *base, int precision,
				int free_num);
t_bigint	bigint_mul(t_bigint num, int multiplier, char *base);
t_bigint	bigint_div(t_bigint num, int divider, char *base);
int			bigint_compare(t_bigint operand_1, t_bigint operand_2);
t_bigint	bigint_round(t_bigint num, char *base, int precision);
t_bigint	arithmetic_dispatcher(char operation,
				t_bigint *operand_1, t_bigint *operand_2, char *base);

void		bigint_normalizer(t_bigint *op_1, t_bigint *op_2);
t_bigint	bigint_cleaner(t_bigint number);

t_bigint	bigint_addfre(t_bigint operand_1, t_bigint operand_2, char *base,
				int free_op);
t_bigint	bigint_subfre(t_bigint operand_1, t_bigint operand_2, char *base,
				int free_op);
t_bigint	bigint_mulfre(t_bigint num, int multiplier, char *base,
				int free_num);
t_bigint	bigint_divfre(t_bigint num, int divider, char *base,
				int free_num);
t_bigint	bigint_roundfre(t_bigint num, char *base, int precision,
				int free_num);

t_bigint	bigint_add(t_bigint operand_1, t_bigint operand_2, t_bigint base);
t_bigint	bigint_adder(t_bigint operand_1, t_bigint operand_2, char *base);

t_bigint	bigint_sub(t_bigint operand_1, t_bigint operand_2, t_bigint base);
t_bigint	bigint_subtracter(t_bigint operand_1, t_bigint operand_2,
			char *base);

#endif
