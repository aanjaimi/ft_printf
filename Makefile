# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aanjaimi <aanjaimi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 22:08:05 by aanjaimi          #+#    #+#              #
#    Updated: 2021/12/05 22:45:32 by aanjaimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INC = ft_printf.h
SRCS = ft_itoa.c\
		ft_printf.c\
		ft_printfchar.c\
		ft_printfint.c\
		ft_printfstr.c\
		ft_printhexa.c\
		ft_printptr.c\
		ft_printunint.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_strlen.c

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar -rsc

all:$(NAME)
$(NAME):$(OBJS) $(INC)
	$(AR) $@ $^

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all
