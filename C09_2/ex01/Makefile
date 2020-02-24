
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

SRCSO	= srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

NAME	= libft.a

HEADER	= includes

OBJS	= ${SRCS:.c=.o}

.c.o:
		gcc ${CFLAGS} -c -I${HEADER} $< -o ${<:.c=.o}

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all: ${NAME} clean

${NAME}: ${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
		${RM} ${SRCSO}

fclean:	clean 
		${RM} ${NAME}

re: all

.PHONY: all clean fclean re
