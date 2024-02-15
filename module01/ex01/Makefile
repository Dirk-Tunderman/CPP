CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

PROGRAM = Zombie

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(PROGRAM)

$(PROGRAM): $(OBJ) 
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $<


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(PROGRAM)

re: fclean all

.PHONY: all clean fclean re