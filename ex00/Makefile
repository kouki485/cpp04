NAME	= Animal

SRCS	= Animal.cpp \
		  cat.cpp\
		  dog.cpp\
		  WrongAnimal.cpp\
		  WrongCat.cpp\
		  main.cpp

OBJS		= $(SRCS:%.c=%.o)

CXX			= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all		: $(NAME)

$(NAME)	: $(SRCS)
		$(CXX) $(CFLAGS) -o $@ $^

clean	:

fclean	: clean
	rm -f $(NAME)
re : fclean all