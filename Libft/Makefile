# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/17 16:23:01 by akharrou          #+#    #+#              #
#    Updated: 2019/05/07 13:21:28 by akharrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

CC          =   gcc
CFLAGS      =   -Wall -Wextra -Werror

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

NAME        =   libft.a

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

OBJECTS     =   $(SOURCES:.c=.o)

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

HEADERS     =   libft.h                                                       \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

SOURCES     =    arithmetic_dispatcher.c                                      \
                 bigint_add.c                                                 \
                 bigint_cleaner.c                                             \
                 bigint_compare.c                                             \
                 bigint_div.c                                                 \
                 bigint_mul.c                                                 \
                 bigint_normalizer.c                                          \
                 bigint_round.c                                               \
                 bigint_sub.c                                                 \
                 ft_pow.c                                                     \
                 ft_atoi.c                                                    \
                 ft_bzero.c                                                   \
                 ft_intlen.c                                                  \
                 ft_intmaxlen_base.c                                          \
                 ft_ischarset.c                                               \
                 ft_itoa.c                                                    \
                 ft_itoa_base.c                                               \
                 ft_dtoa_base.c                                               \
                 ft_ldtoa_base.c                                              \
                 ft_memalloc.c                                                \
                 ft_memset.c                                                  \
                 ft_padding.c                                                 \
                 ft_strappend.c                                               \
                 ft_strcat.c                                                  \
                 ft_strcatfre.c                                               \
                 ft_strchr.c                                                  \
                 ft_strcmp.c                                                  \
                 ft_strcpy.c                                                  \
                 ft_strcpyfre.c                                               \
                 ft_strdup.c                                                  \
                 ft_strdup_range.c                                            \
                 ft_strjoin.c                                                 \
                 ft_strjoinfre.c                                              \
                 ft_strlen.c                                                  \
                 ft_strlstrip.c                                               \
                 ft_strnappend.c                                              \
                 ft_strncat.c                                                 \
                 ft_strncpy.c                                                 \
                 ft_strndup.c                                                 \
                 ft_strnew.c                                                  \
                 ft_strnjoin.c                                                \
                 ft_strnjoinfre.c                                             \
                 ft_strnlen.c                                                 \
                 ft_strnlstrip.c                                              \
                 ft_strnprepend.c                                             \
                 ft_strprepend.c                                              \
                 ft_strrstrip.c                                               \
                 ft_strsplit.c                                                \
                 ft_strstrip.c                                                \
                 ft_swap_str.c                                                \
                 ft_uintmaxlen_base.c                                         \
                 ft_utoa_base.c                                               \
                 valid_base.c                                                 \


# Main — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)
	@echo && echo $(GREEN) "[√]     [Library Successfully Compiled!]"
	@echo $(WHITE)

%.o: %.c $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling => " $<

# House Keeping — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

DEL = /bin/rm -rf

clean:
	@$(DEL) $(shell find . -name '*.o')

fclean: clean
	@$(DEL) $(NAME)

re: fclean all

# Text Colorization — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

GREEN = "\033[1;32m"
WHITE = "\033[1;37m"

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

.PHONY: all clean fclean re nc nh na

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —
