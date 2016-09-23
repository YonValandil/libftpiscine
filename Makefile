CC =		gcc
NAME =		bin
LIB =		libft.a
SRCS_DIR =	./srcs/
OBJS_DIR =	./objs/
CFLAGS =	-Wall -Werror -Wextra
SRCS =		$(SRCS_DIR)/ft_putchar.c	\
			$(SRCS_DIR)/ft_putstr.c		\
			./main.c
OBJS =		$(SRCS:$(SRCS_DIR)%.c=$(OBJS_DIR)%.)
HEADER =	./includes/

all:
	@make $(NAME)

$(NAME):
	$(CC) -c $(SRCS) -I$(HEADER) $(CFLAGS) -o $(OBJS_DIR)
	ar rc $(LIB) $(OBJS)
	ranlib $(LIB)
	$(CC) -o $(NAME) -I$(HEADER) $(SRCS) $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY: bin
