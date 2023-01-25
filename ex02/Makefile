NAME	= Animal

SRCS	= Animal.cpp \
		  cat.cpp\
		  dog.cpp\
		  WrongAnimal.cpp\
		  WrongCat.cpp\
		  Brain.cpp\
		  main.cpp

OBJS		= $(SRCS:%.c=%.o)

CXX			= c++

CFLAGS	= -std=c++98
#-Wall -Wextra -Werror
all		: $(NAME)

$(NAME)	: $(SRCS)
		$(CXX) $(CFLAGS) -o $@ $^

clean	:

fclean	: clean
	rm -f $(NAME)
re : fclean all