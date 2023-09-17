NAME := exec

CXX := c++

CXXFLAGS := -Wall -Werror -Wextra -Wshadow -std=c++98 -MMD -g3

OBJ :=	main.o \
		ClapTrap.o \
		ScavTrap.o \
		FragTrap.o \
		DiamondTrap.o \

INCLUDES := -I.

DEPS := ${OBJ:.o=.d}

RM := rm -f

#############################################################################

$(NAME) : $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	$(RM) $(DEPS)
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re

-include $(DEPS)