NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)
RM = rm -f

SRCS_DIR = src
INC_DIR = include

SRCS = $(SRCS_DIR)/Contact.cpp \
	$(SRCS_DIR)/PhoneBook.cpp \
	$(SRCS_DIR)/main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re