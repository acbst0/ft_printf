NAME	= libftprintf.a

FILES	= ft_printf.c \
			ft_print_s.c \
			ft_print_ptr.c \
			ft_print_num.c \
			ft_print_unsigned.c \
			ft_print_x.c \

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

OFILES	= $(FILES:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(FILES)
	ar -r -c $(NAME) $(OFILES)

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
