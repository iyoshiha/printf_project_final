# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/30 13:00:37 by iyoshiha          #+#    #+#              #
#    Updated: 2021/11/24 01:53:17 by iyoshiha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = libprintf.a
LIBFT =		libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memccpy.c libft/ft_memmove.c \
			libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strlen.c libft/ft_strlcpy.c libft/ft_strlcat.c \
			libft/ft_strchr.c libft/ft_strrchr.c libft/ft_strnstr.c libft/ft_strncmp.c libft/ft_atoi.c \
			libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c \
			libft/ft_toupper.c libft/ft_tolower.c libft/ft_calloc.c libft/ft_strdup.c libft/ft_substr.c \
			libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c \
			libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c
LIBFT_O =	$(LIBFT:.c=.o)
SRC		=	src/ft_printf.c src/output.c src/convert_and_count.c
SRC_O	=	$(SRC:.c=.o)
CONV	= 	handle/handle_d.c handle/handle_i.c handle/handle_large_x.c handle/handle_low_x.c handle/handle_p.c \
			handle/handle_c.c handle/handle_pct.c handle/handle_s.c handle/handle_u.c
CONV_O	=	$(CONV:.c=.o)
HEX		=	hex_component/printAddress.c hex_component/printDecimalBase.c hex_component/printHexBase.c
HEX_O	=	$(HEX:.c=.o)
OBJECTS =	$(LIBFT_O) $(SRC_O) $(CONV_O) $(HEX_O)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	gcc $(CFLAGS) -c $< -o ../$@


clean:
	$(RM) ../$(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

# problem : theres directory so we need to speciify dir.
