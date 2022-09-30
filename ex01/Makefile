NAME = Phonebook

CXX = c++

CXXFLAGS = -MMD -Wall -Wextra -Werror -std=c++98

SRCS = phonebook.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(@)

clean:
	rm -f $(OBJS)
	rm -f $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

-include $(DEPS)
