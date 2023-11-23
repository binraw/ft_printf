SOURCES =


BONUS = 


CFLAGS = -Wall -Wextra -Werror
LIB= libft.h
OBJ = $(SOURCES:.c=.o)
OBJ_BONUS = $(BONUS:.c=.o)
OBJ_ALL = $(OBJ) $(OBJ_BONUS)
NAME = libftprintf.a 

%.o: %.c libft.h
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)


$(NAME): $(OBJ) $(LIB)
		$(AR) -rcs $(NAME) $(OBJ)

bonus:
	$(MAKE) $(NAME) SOURCES="$(SOURCES) $(BONUS)"
clean:
		$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
