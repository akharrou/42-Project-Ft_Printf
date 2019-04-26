# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/17 16:23:01 by akharrou          #+#    #+#              #
#    Updated: 2019/04/25 23:30:29 by akharrou         ###   ########.fr        #
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

SOURCES     =   ft_atoi.c                                                     \
                ft_bzero.c                                                    \
                ft_ftoa_base.c                                                \
                ft_intmaxlen_base.c                                           \
                ft_ischarset.c                                                \
                ft_itoa_base.c                                                \
                ft_memalloc.c                                                 \
                ft_memset.c                                                   \
                ft_padding.c                                                  \
                ft_powl.c                                                     \
                ft_round_with_prior.c                                         \
                ft_strappend.c                                                \
                ft_strcat.c                                                   \
                ft_strchr.c                                                   \
                ft_strcmp.c                                                   \
                ft_strdup.c                                                   \
                ft_strjoin.c                                                  \
                ft_strjoinfre.c                                               \
                ft_strlen.c                                                   \
                ft_intlen.c                                                   \
                ft_strndup.c                                                  \
                ft_strdup_range.c                                             \
                ft_strnew.c                                                   \
                ft_strnlen.c                                                  \
                ft_strcpy.c                                                   \
                ft_strncpy.c                                                  \
                ft_strprepend.c                                               \
                ft_strsplit.c                                                 \
                ft_strnjoin.c                                                 \
                ft_strnjoinfre.c                                              \
                ft_strnappend.c                                               \
                ft_strnprepend.c                                              \
                ft_uintmaxlen_base.c                                          \
                ft_utoa_base.c                                                \
                valid_base.c                                                  \

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
