# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jricafor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/27 12:01:05 by jricafor          #+#    #+#              #
#    Updated: 2020/02/27 14:03:27 by jricafor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op

SRCS	= main.c ft_do_op.c

OBJS	= ${SRCS:.c=.o}

RM		= rm -f

.c.o:
	gcc -Wall -Werror -Wextra -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	gcc -Wall -Werror -Wextra ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: clean all

.PHONY: all clean fclean re
