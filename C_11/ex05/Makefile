# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jricafor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/27 12:01:05 by jricafor          #+#    #+#              #
#    Updated: 2020/02/27 12:56:19 by jricafor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op

SRCS	= main.c ft_do_op.c

RM		= rm -f

all: clean ${NAME}

${NAME}:
	gcc -Wall -Werror -Wextra ${SRCS} -o ${NAME}

clean:
	${RM} ${NAME}

re:
	clean all

.PHONY: all clean re
