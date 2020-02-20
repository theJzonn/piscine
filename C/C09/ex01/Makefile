
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

HEADERS	= headers/ft.h

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		gcc ${CFLAGS} -c $<- -o ${<:.c=.o}

all:
		gcc -o ${OBJS}
