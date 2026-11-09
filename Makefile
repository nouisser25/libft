NAME        = libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
RM          = rm -f

# Fichiers sources (Partie 1, Partie 2 et Listes chaînées)
SRCS        = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
              ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
              ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
              ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
              ft_atoi.c ft_calloc.c ft_strdup.c \
              ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
              ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
              ft_putendl_fd.c ft_putnbr_fd.c \
              ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
              ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Transformation de la liste des .c en .o
OBJS        = $(SRCS:.c=.o)

# Règle par défaut
all: $(NAME)

# Règle de compilation de chaque fichier .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle de création de la bibliothèque statique
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Suppression des fichiers objets
clean:
	$(RM) $(OBJS)

# Suppression des fichiers objets et de l'archive
fclean: clean
	$(RM) $(NAME)

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re