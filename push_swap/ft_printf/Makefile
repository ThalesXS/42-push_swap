#	====================		Colors			====================

RED = \033[0;31m
GREEN = \033[0;32m
BLUE = \033[0;34m
YELLOW = \033[0;33m
MAGENTA = \033[0;35m
CYAN = \033[0;36m

B_RED = \033[1;31m
B_GREEN = \033[1;32m
B_BLUE = \033[1;34m
L_BLUE = \033[1;94m
B_YELLOW = \033[1;33m
B_MAGENTA = \033[1;35m
B_CYAN = \033[1;36m

RESET = \033[0m

#	====================		Files			====================

NAME = libftprintf.a
TITLE = $(B_YELLOW)$(NAME)$(RESET):
FILES =	ft_print_c.c	ft_printf.c ft_print_p.c ft_print_u.c ft_ptoa.c	\
		ft_xtoa.c ft_printchar.c ft_print_s.c ft_print_x.c ft_specif.c \
		ft_xxtoa.c ft_print_d.c ft_printstr.c ft_print_xx.c \
		ft_utoa.c
OBJ = $(FILES:.c=.o)
CCW = gcc -Wall -Wextra -Werror
WBLOCK = --no-print-directory

#	====================		Rules			====================

all: $(NAME)

$(NAME): $(OBJ)
	@make bonus $(WBLOCK) -C libft
	@cp libft/libft.a $(NAME)
	@ar rc $(NAME) $(OBJ)
	@printf "$(TITLE) $(GREEN)Library created.\n"

%.o: %.c
	$(eval COMPTEUR=$(shell echo $$(($(COMPTEUR)+1))))
	@printf "\e[?25l"
	@if test $(COMPTEUR) -eq 1;then \
		printf "$(B_YELLOW)$(NAME)$(RESET):$(YELLOW) Compiling binary files...$(RESET)\n\n";fi
	@printf "\033[A\33[2K\r\t       $(B_CYAN)Binary $(COMPTEUR):$(CYAN) $@$(RESET)\n"
	@$(CC) $(W) -c $<

clean:
	@make clean $(WBLOCK) -C libft
	@rm -f $(OBJ) $(BOBJ)
	@printf "$(TITLE) $(RED)Binary files deleted.$(RESET)\n"

fclean:
	@make fclean $(WBLOCK) -C libft
	@rm -f $(NAME)
	@rm -f $(OBJ) $(BOBJ)
	@printf "$(TITLE) $(RED)Binary files deleted.$(RESET)\n"
	@printf "$(TITLE) $(RED)Library deleted.$(RESET)\n"

bonus: all

re: fclean all
