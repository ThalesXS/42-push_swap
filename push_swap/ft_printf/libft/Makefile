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
NAME = libft.a
TITLE = $(B_YELLOW)$(NAME)$(RESET):
FILES = ft_atoi.c ft_atol.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_itoa.c ft_strjoin.c ft_split.c \
		ft_strtrim.c ft_bzero.c ft_substr.c ft_strdup.c \
		ft_calloc.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_isdigit.c ft_memset.c ft_strlen.c \
		ft_isalnum.c ft_isprint.c ft_strchr.c ft_strrchr.c \
		ft_isalpha.c ft_memcpy.c ft_strlcat.c ft_tolower.c \
		ft_isascii.c ft_memmove.c ft_strlcpy.c ft_toupper.c
OBJ = $(FILES:.c=.o)
CCW = gcc -Wall -Wextra -Werror
BFILE = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BOBJ = $(BFILE:.c=.o)

#	====================		Rules			====================

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $(OBJ)
	@printf "$(TITLE) $(GREEN)Library created.\n"

%.o: %.c
	$(eval COMPTEUR=$(shell echo $$(($(COMPTEUR)+1))))
	@printf "\e[?25l"
	@if test $(COMPTEUR) -eq 1;then \
		printf "$(B_YELLOW)$(NAME)$(RESET):$(YELLOW) Compiling binary files...$(RESET)\n\n";fi
	@printf "\033[A\33[2K\r\t $(B_CYAN)Binary $(COMPTEUR):$(CYAN) $@$(RESET)\n"
	@$(CC) $(W) -c $<

clean:
	@rm -f $(OBJ) $(BOBJ)
	@printf "$(TITLE) $(RED)Binary files deleted.$(RESET)\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(TITLE) $(RED)Library deleted.$(RESET)\n"

re: fclean all

bonus: $(BOBJ) $(OBJ)
	@ar rcs $(NAME) $(BOBJ) $(OBJ)
	@printf "$(TITLE) $(GREEN)Library created.\n"