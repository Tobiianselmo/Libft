CC = gcc

CFLAGS = -Wall -Werror -Wextra

CFILES = ft_atoi.c ft_bzero.c ft_isalnum ft_isalpha.c ft_isascii.c ft_isdigit.c 
ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c 
ft_strlcat.c ft_strlcpy ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c 
ft_toupper.c libft.h

OFILES = $(CFILES:.c=.o)

NAME = libft.a

#Rules
all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)