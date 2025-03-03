NAME = push_swap
LIBFT = libft
LIBFTM = libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = 	utils.c \
			sort_func.c \
			sort_small_func.c \
			sort.c \
			action_a.c \
			action_b.c \
			action_c.c \
			quick_sort.c \
			free_error.c \
			push_swap.c

OBJS = $(CFILES:.c=.o)

SUCCESS_MSG = "\033[0;32m✔ Success! Build completed.\033[0m"
ERROR_MSG = "\033[0;31m✘ Error! Build failed.\033[0m"
FCLEAN_MSG = "\033[0;33m🧹 Cleaned up the project.\033[0m"

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFTM) -o $(NAME) && echo $(SUCCESS_MSG) || echo $(ERROR_MSG)

all: $(NAME)

clean:
		@rm -f $(OBJS)
		@make clean -C $(LIBFT)

fclean: clean
		@make fclean -C $(LIBFT)
		@rm -rf $(NAME)
		@echo $(FCLEAN_MSG)

re: fclean all

.PHONY: all clean fclean re
