# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/07 18:55:23 by akharrou          #+#    #+#              #
#    Updated: 2019/05/23 14:19:17 by akharrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

CC          =   gcc
CFLAGS      =   -Wall -Wextra -Werror -g #$(DEBUG_FLAGS)

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

DEBUG_FLAGS =   -O0 -g                                                      \
                                                                            \
                -fsanitize=address                                          \
                -fsanitize=undefined                                        \
                -fsanitize=bounds                                           \
                -fsanitize=nullability-arg                                  \
                -fsanitize=nullability-return                               \
                -fsanitize=nullability-assign                               \
                -fsanitize=undefined                                        \
                -fsanitize-address-use-after-scope                          \
                # -fsanitize=integer                                          \
                # -fsanitize=object-size                                      \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

NAME        =   libftprintf.a

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

HEADERS     =   ft_printf.h

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

SOURCES     =   parser.c                                                      \
                formatter.c                                                   \
                                                                              \
                ft_printf.c                                                   \
                ft_dprintf.c                                                  \
                ft_sprintf.c                                                  \
                ft_asprintf.c                                                 \
                ft_vprintf.c                                                  \
                ft_vdprintf.c                                                 \
                ft_vsprintf.c                                                 \
                ft_vasprintf.c                                                \
                                                                              \
                $(PLUGINS)                                                    \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

PLUGINS     =   Handlers/c_handler.c                                          \
                Handlers/i_handler.c                                          \
                Handlers/u_handler.c                                          \
                Handlers/f_handler.c                                          \
                Handlers/b_handler.c                                          \
                Handlers/o_handler.c                                          \
                Handlers/d_handler.c                                          \
                Handlers/x_handler.c                                          \
                Handlers/xx_handler.c                                         \
                Handlers/s_handler.c                                          \
                Handlers/r_handler.c                                          \
                Handlers/p_handler.c                                          \
                Handlers/mod_handler.c                                        \
                Handlers/style_handler.c                                      \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

OBJECTS     =   $(SOURCES:.c=.o)

# Main — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

all: $(NAME)

$(NAME): Libft/libft.a $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS) $(shell find Libft/ -name '*.o')
	@echo && echo $(GREEN) "[√]     [Extended Library Successfully Compiled!]"
	@echo $(WHITE)

Libft/libft.a:
	@make -C Libft

%.o: %.c $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling => " $<

# House Keeping — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

DEL = /bin/rm -rf

clean:
	@$(DEL) $(shell find . -name '*.o')
	@make clean -C Libft/

fclean: clean
	@$(DEL) $(NAME)
	@make fclean -C Libft/

re: fclean all

# Text Colorization — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

GREEN = "\033[1;32m"
WHITE = "\033[1;37m"

# Norminette Check — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

nh:
	@echo && echo $(GREEN) "Checking Norme -- Header Files:" && echo $(WHITE);
	@norminette $(shell find . -name '*.h')

nc:
	@echo && echo $(GREEN) "Checking Norme -- Source Files:" && echo $(WHITE);
	@norminette $(shell find . -name '*.c')

na: nh nc

# Correction Script — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

correction:

	@echo '==============================================================='
	@echo && echo $(GREEN) "I - Checking Author File:" && echo $(WHITE);
	@sleep 1
	cat author
	@echo
	@sleep 1

	@echo '==============================================================='
	@echo && echo $(GREEN) "II - Checking Norme:" && echo $(WHITE);
	@sleep 1

	@echo && echo $(GREEN) "a - Checking Norme -- Header Files:" && echo $(WHITE);
	@sleep 1
	@norminette $(shell find . -name '*.h')

	@sleep 1
	@echo && echo $(GREEN) "b - Checking Norme -- Source Files:" && echo $(WHITE);
	@sleep 1
	@norminette $(shell find . -name '*.c')
	@echo

	@echo '==============================================================='
	@sleep 1
	@echo && echo $(GREEN) "III - Checking Compilation:" && echo $(WHITE);
	@sleep 1
	@echo 'make all'
	@echo
	@sleep 1
	@make all
	@sleep 1
	@sleep 1

	@echo '==============================================================='
	@echo && echo $(GREEN) "IV - Checking Makefile Rules:" && echo $(WHITE);
	@sleep 1
	@echo 'Current working directory:'
	@echo
	@sleep 1
	@echo 'ls -1'
	@echo
	@sleep 1
	@ls -1
	@echo
	@sleep 1

	@echo '==============================================================='
	@echo && echo $(GREEN) "a - make clean" && echo $(WHITE);
	@sleep 1
	@echo 'make clean'
	@echo
	@make clean
	@sleep 1
	@sleep 1
	@ls -1
	@echo
	@sleep 1

	@echo '==============================================================='
	@echo && echo $(GREEN) "b - make fclean" && echo $(WHITE);
	@sleep 1
	@echo 'make fclean'
	@echo
	@make fclean
	@sleep 1
	@sleep 1
	@ls -1
	@echo
	@sleep 1

	@echo '==============================================================='
	@echo && echo $(GREEN) "V - Explain code/approach" && echo $(WHITE);
	@echo $(GREEN) "VI - Q&A" && echo $(WHITE);
	@echo '==============================================================='

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

.PHONY: all clean fclean re nc nh na correction

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —
