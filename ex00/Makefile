NAME	= Animal

SRCS	= Animal.cpp \
		  cat.cpp\
		  dog.cpp\
		  main.cpp

OBJS		= $(SRCS:%.c=%.o)

CC			= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all		: $(NAME)

$(NAME)	: $(SRCS)
		$(CC) $(CFLAGS) -o $@ $^

clean	:

fclean	: clean
	rm -f $(NAME)
re : fclean all