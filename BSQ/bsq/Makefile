SRCS		=	main.c handlers.c exceptions_00.c exceptions_01.c libtf_00.c libtf_01.c libtf_02.c libtf_03.c libtf_04.c rules_00.c

OBJS	=	${SRCS:.c=.o}


NAME	=	bsq

CC		=	cc

RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $<	-o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

res:		fclean all