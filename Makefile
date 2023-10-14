DOTC = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c \
ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c
BONUS_DOTC = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

NAME = libft.a
OBJECTS = $(DOTC:.c=.o)
BONUS_OBJECTS = $(BONUS_DOTC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(DOTC)
	ar rcs $@ $(OBJECTS)
bonus:
	$(CC) $(CFLAGS) -c $(DOTC) $(BONUS_DOTC)
	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re