NAME	= libftprintf.a

FILES	=

BONUS	=

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

bonus: $(BONUS_OBJECTS)
	ar -r -c $(NAME) $(BONUS_OBJECTS)

.PHONY: all, clean, fclean, re
