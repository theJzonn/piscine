NAME		=	libft.a

SRCS		=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

HEADER	=	includes

OBJS		=	${SRCS:.c=.o}

CC =		gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
