NAME = libft.a

C_FILES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
 			ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_FILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
				ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJECT_FILES = $(C_FILES:.c=.o)
OBJECT_BONUS_FILES = $(BONUS_FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECT_FILES) libft.h
	ar -rc libft.a $(OBJECT_FILES)

$(OBJECT_FILES) : $(C_FILES)
	gcc -Wall -Wextra -Werror -g3 -c  $(C_FILES)

%.o : $(BONUS_FILES)
	gcc -Wall -Wextra -Werror -g3 -c  $(BONUS_FILES)

bonus :  $(OBJECT_BONUS_FILES) $(NAME) libft.h
	@ar -rc libft.a $(OBJECT_BONUS_FILES)

clean :
	rm -f $(OBJECT_FILES) $(OBJECT_BONUS_FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: re bonus all clean fclean Makefile