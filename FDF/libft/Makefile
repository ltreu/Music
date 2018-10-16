
NAME =		libft.a

CC =		gcc

AR =		ar -rcs

EXT =		.c

FLAGS =		-Wall -Wextra -Werror

FILE =		ft_memchr.c		ft_putnbr_fd.c		ft_striter.c	ft_strnew.c		\
			ft_atoi.c		ft_memcmp.c			ft_putstr.c		ft_striteri.c 	\
			ft_strnstr.c	ft_bzero.c			ft_memcpy.c		ft_putstr_fd.c 	\
			ft_strjoin.c	ft_strrchr.c		ft_isalnum.c	ft_memdel.c		\
			ft_strcat.c		ft_strlcat.c		ft_strsplit.c	ft_isalpha.c	\
			ft_memmove.c	ft_strchr.c			ft_strlen.c		ft_strstr.c		\
			ft_isascii.c 	ft_memset.c 		ft_strclr.c		ft_strmap.c		\
			ft_strsub.c		ft_isdigit.c		ft_putchar.c	ft_strcmp.c		\
			ft_strmapi.c	ft_strtrim.c		ft_isprint.c	ft_putchar_fd.c	\
			ft_strcpy.c		ft_strncat.c		ft_tolower.c	ft_itoa.c		\
			ft_putendl.c	ft_strdel.c			ft_strncmp.c	ft_toupper.c	\
			ft_memalloc.c	ft_putendl_fd.c		ft_strdup.c		ft_strncpy.c	\
			ft_memccpy.c	ft_putnbr.c			ft_strequ.c		ft_strnequ.c	\
			ft_isspace.c	get_next_line.c

SOURCE = 	./

INCLUDE =	./

HEADER = 	libft.h

FILES =		$(addprefix $(SOURCE), $(addsuffix $(EXT), $(FILE)))

OBJ = $(FILE:.c=.o)

LIB_DIR =	libft

EXEC=		$(LIB_DIR)/$(LIB_DIR).a

C_W=		\033[0m
C_R=		\033[38;5;124m
C_Y=		\033[38;5;214m
C_B=		\033[38;5;97m
C_N=		\033[38;5;200m
C_G=		\033[38;5;190m

all: 	$(NAME)

$(NAME): $(OBJ)
		@$(AR) $(NAME) $(OBJ)
		@echo "\n$(C_Y)$(NAME) $(C_R)		is done !$(C_W)"

%.o:	%$(EXT)
		@$(CC) -c $^
		@printf "\033[32m.$(C_W)"

clean:
		@rm -rf $(OBJ)
		@echo "$(C_B)$(NAME)$(C_R)		All obj are cleaned$(C_W)"

fclean: clean
		@rm -rf $(NAME)
		@echo "\n$(C_G)$(NAME)$(C_R)		is clean$(C_W)"

norme:
	@echo "\nSource:$(C_N)"
	@norminette $(FILES)
	@echo "\n$(C_W)Header:$(C_N)"
	@norminette $(INCLUDE)$(HEADER)
	@echo "$(C_W)"
re: fclean all
