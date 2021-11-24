# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/30 13:00:37 by iyoshiha          #+#    #+#              #
#    Updated: 2021/11/25 04:18:40 by iyoshiha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS 	=	-Wall -Wextra -Werror
HEADER	=	-I includes
NAME	=	libftprintf.a
LIBFT	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
LIBFT_O =	$(LIBFT:.c=.o)
SRC		=	ft_printf.c output.c convert_and_count.c
SRC_O	=	$(SRC:.c=.o)
CONV	= 	handle_d.c handle_i.c handle_large_x.c handle_low_x.c handle_p.c \
			handle_c.c handle_pct.c handle_s.c handle_u.c
CONV_O	=	$(CONV:.c=.o)
HEX		=	printAddress.c printDecimalBase.c printHexBase.c
HEX_O	=	$(HEX:.c=.o)
OBJECTS =	$(LIBFT_O) $(SRC_O) $(CONV_O) $(HEX_O)
VPATH	= 	hex_component handle libft src

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(LIBFT_O): %.o: %.c
	gcc $(CFLAGS) -c $< -o $@ $(HEADER)

$(HEX_O): %.o: %.c
	gcc $(CFLAGS) -c $< -o $@ $(HEADER)

$(CONV_O): %.o: %.c
	gcc $(CFLAGS) -c $< -o $@ $(HEADER)

$(SRC_O): %.o: %.c
	gcc $(CFLAGS) -c $< -o $@ $(HEADER)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
