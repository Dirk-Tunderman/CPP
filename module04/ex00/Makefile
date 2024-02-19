CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

PROGRAM = Animal

SRC = Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Animal.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(PROGRAM)

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(PROGRAM)

re: fclean all

.PHONY: all clean fclean re
