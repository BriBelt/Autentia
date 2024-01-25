NAME = bowling

SRC =	main.cpp \
<<<<<<< HEAD
		src/game/game.cpp \
		src/player/player.cpp \

=======
		src/player/Player.cpp
>>>>>>> 726dcd06e5b9ec3934dbd27bd8af6b00b9cd1e6d

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address

all: $(NAME)
	@printf "$(NAME) compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm -f $(NAME)
	@printf "$(NAME) removed\n"

re: fclean all
	@printf "$(NAME) recompiled\n"

.PHONY: all clean fclean re
