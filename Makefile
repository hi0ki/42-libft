SRCS =  ft_atoi.c ft_isdigit.c ft_tolower.c ft_putchar_fd.c ft_putnbr_fd.c	\
	ft_bzero.c  ft_strlcat.c ft_toupper.c ft_strncmp.c ft_calloc.c ft_split.c	\
	ft_memchr.c ft_strlcpy.c ft_isalnum.c ft_isprint.c	ft_putstr_fd.c\
	ft_memcmp.c ft_strlen.c ft_isalpha.c ft_memcpy.c ft_itoa.c	ft_putendl_fd.c	\
	ft_strchr.c ft_strnstr.c ft_isascii.c ft_memset.c ft_memmove.c ft_striteri.c		\
	ft_strrchr.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c\

BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

OBJS = $(SRCS:.c=.o)
OBJB = $(BSRCS:.c=.o)

AR = ar rcs
CC = CC
RM = rm -f
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus:	$(OBJB)
	$(AR) $(NAME) $(OBJB)

clean:
	$(RM) $(OBJS) $(OBJB)
fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY: re fclean bonus all