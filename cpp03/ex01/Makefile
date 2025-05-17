NAME = scavtrap 
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
PURPLE = \033[0;35m
NORMAL = \033[0m

INC_DIR = ./inc
HEADERS = $(INC_DIR)/ClapTrap.hpp $(INC_DIR)/ScavTrap.hpp
SRC_DIR = ./src
OBJ_DIR = ./obj
SRCS = $(SRC_DIR)/main.cpp \
		$(SRC_DIR)/ScavTrap.cpp \
		$(SRC_DIR)/ClapTrapActions.cpp \
		$(SRC_DIR)/ClapTrap.cpp
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@echo "${YELLOW}Making the directory for object files...${NORMAL}"
	@mkdir -p $(OBJ_DIR)
	@echo "${GREEN}    $(OBJ_DIR) successfully created.${NORMAL}"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@echo "${YELLOW}Compiling $< into $@...${NORMAL}"
	@mkdir -p $(@D)
	@$(CPP) $(FLAGS) -I$(INC_DIR) -c $< -o $@
	@echo "${GREEN}    $@ compiled successfully.${NORMAL}"

$(NAME): $(OBJS)
	@echo "${YELLOW}Linking .o files to $(NAME)...${NORMAL}"
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "${GREEN}    $(NAME) compiled successfully.${NORMAL}"

clean:
	@echo "${PURPLE}Deleting .o files and $(OBJ_DIR)...${NORMAL}"
	@rm -rf $(OBJ_DIR)
	@echo "${GREEN}    .o files and $(OBJ_DIR) deleted successfully.${NORMAL}"
	
fclean: clean
	@echo "${RED}Deleting $(NAME)...${NORMAL}"
	@rm $(NAME)
	@echo "${GREEN}    $(NAME) deleted successfully.${NORMAL}"
	
re: fclean all
	@echo "${BLUE}Relinking $(NAME)...${NORMAL}"
	@echo "${GREEN}   $(NAME) successfully relink.${NORMAL}"

.PHONY: all clean fclean re
