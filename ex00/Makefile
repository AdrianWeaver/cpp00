NAME = megaphone

CXX = c++

CXXFLAGS = -MMD -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS = megaphone.o
DEPS = megaphone.d


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(@)

clean:
	rm -f $(OBJS)
	rm -f $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

-include $(DEPS)

.PHONY: all clean fclean re
