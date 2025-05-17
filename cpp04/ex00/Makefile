RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
NORMAL = \033[0m

NAME = poly
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow
INC_DIR = ./inc
HEADERS = $(INC_DIR)/Animal.hpp \
			$(INC_DIR)/Cat.hpp \
			$(INC_DIR)/Dog.hpp \
			$(INC_DIR)/WrongAnimal.hpp \
			$(INC_DIR)/WrongCat.hpp
SRC_DIR = ./src
SRCS = $(SRC_DIR)/main.cpp \
			$(SRC_DIR)/Animal.cpp \
			$(SRC_DIR)/Cat.cpp \
			$(SRC_DIR)/Dog.cpp \
			$(SRC_DIR)/WrongAnimal.cpp \
			$(SRC_DIR)/WrongCat.cpp
OBJ_DIR = ./obj
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@echo "${CYAN}Making the directory for object files...${NORMAL}"
	@mkdir -p $(OBJ_DIR)
	@echo "${GREEN}    $(OBJ_DIR) was successfully created.${NORMAL}"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@echo "${YELLOW}Compiling $< int $@...${NORMAL}"
	@mkdir -p $(@D)
	@$(CPP) $(FLAG) -I$(INC_DIR) -c $< -o $@
	@echo "${GREEN}    $@ successfully compiled.${NORMAL}"

$(NAME): $(OBJS)
	@echo "${YELLOW}Building $(NAME) and linking .o files...${NORMAL}"
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "${GREEN}    $(NAME) successfully built and .o files linked.${NORMAL}"

clean:
	@echo "${PURPLE}Deleting $(OBJ_DIR) and .o files...${NORMAL}"
	@rm -rf $(OBJ_DIR)
	@echo "${GREEN}    $(OBJ_DIR) and .o files successfully deleted.${NORMAL}"

fclean: clean
	@echo "${RED}Deleting $(NAME)...${NORMAL}"
	@rm $(NAME)
	@echo "${GREEN}    $(NAME) successfully deleted.${NORMAL}"

re: fclean all
	@echo "${BLUE}Relinking $(NAME)...${NORMAL}"
	@echo "${GREEN}    $(NAME) successfully relinked.${NORMAL}"

colors:
	@echo "${RED}xxxx...${NORMAL}"
	@echo "${GREEN}xxxx...${NORMAL}"
	@echo "${YELLOW}xxxx...${NORMAL}"
	@echo "${BLUE}xxxx...${NORMAL}"
	@echo "${PURPLE}xxxx...${NORMAL}"
	@echo "${CYAN}xxxx...${NORMAL}"

.PHONY: all clean fclean re
