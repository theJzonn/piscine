NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
SRCSO  = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o
HEADER = includes/ft.h
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: ${NAME}

$(NAME}:	${SRCSO}
		gcc ${CFLAGS} -I ${HEADER} -c  ${SRCS}
		ar rc ${NAME} ${SRCSO}

clean:
		${RM} ${SRCSO}

fclean: clean
		${RM} ${NAME}

re: fclean all