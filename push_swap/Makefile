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

# ============================ {Directories} ============================

INC = includes
SRC = srcs
OBJ_DIR = objects

# ============================ {Files      } ============================

NAME = push_swap
TITLE = $(B_YELLOW)$(NAME)$(RESET):
FILES = push_swap.c utils.c utils2.c utils3.c utils4.c utils5.c utils6.c \
		utils7.c rules0.c rules1.c rules2.c rules3.c
OBJ = $(FILES:.c=.o)
ARQ = push_swap.a
TARGET = $(addprefix $(OBJ_DIR)/, $(OBJ))

# ============================ {Commands   } ============================

CC = gcc
AR = ar rc

# ============================ {Flags      } ============================

W = -Wall -Wextra -Werror
O = -c
I = -I $(INC)
WBLOCK = --no-print-directory

LIBPRINT = -L ./ft_printf -lftprintf
LIBFT = -L ./ft_printf/libft -lft

# ============================ {Rules      } ============================

all: $(NAME)

$(NAME): $(OBJ_DIR) $(TARGET)
	@make $(WBLOCK) -C ft_printf
	@cp ft_printf/libftprintf.a libps.a
	@ar rsc libps.a $(TARGET)
	@$(CC) $(W) $(TARGET) $(LIBPRINT) -o $(NAME) $(I)
	@printf "$(TITLE) $(GREEN)Program created.\n"

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC)/%.c
	$(eval COMPTEUR=$(shell echo $$(($(COMPTEUR)+1))))
	@printf "\e[?25l"
	@if test $(COMPTEUR) -eq 1;then \
		printf "$(B_YELLOW)$(NAME)$(RESET):$(YELLOW) Compiling binary files...$(RESET)\n\n";fi
	@printf "\033[A\33[2K\r\t   $(B_CYAN)Binary $(COMPTEUR):$(CYAN) $@$(RESET)\n"
	@$(CC) $(W) $(O) $< -o $@ $(I)

clean:
	@make clean $(WBLOCK) -C ft_printf
	@rm -rf $(OBJ_DIR)
	@printf "$(TITLE) $(RED)Binary files deleted.$(RESET)\n"

fclean:
	@make fclean $(WBLOCK) -C ft_printf
	@rm -f libps.a
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)
	@printf "$(TITLE) $(RED)Binary files deleted.$(RESET)\n"
	@printf "$(TITLE) $(RED)Program deleted.$(RESET)\n"


re: fclean all
