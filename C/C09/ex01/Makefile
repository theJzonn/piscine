
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

HEADERS	= headers/ft.h

OBJS	= ${SRCS:.c=.o}

CFLAGS	= -Wall -Wextra -Werror

all:	libft.a

libft.a:	${OBJS}
			gcc ${FLAGS} ${OBJS}
			ar rc libft.a ${OBJS}

.PHONY:		all clean fclean re
