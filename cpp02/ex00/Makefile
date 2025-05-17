# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoore <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 14:22:01 by smoore            #+#    #+#              #
#    Updated: 2025/04/12 17:50:36 by smoore           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed 
INC		= ./inc
CPP		= c++
HEADERS	= $(INC)/Fixed.hpp
FLAGS	= -Wall -Werror -Wextra -g3 -std=c++98
RED		= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[0;33m
BLUE	= \033[0;34m
PURPLE	= \033[0;35m
NC		= \033[0m
SRC_DIR	= ./src
OBJ_DIR	= ./obj
SRCS	= $(SRC_DIR)/main.cpp \
			 $(SRC_DIR)/Fixed.cpp
OBJS	= $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@echo "${YELLOW}Creating object directory $(OBJ_DIR)...${NC}"
	@mkdir -p $(OBJ_DIR)
	@echo "${GREEN}    Created $(OBJ_DIR).${NC}"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@echo "${YELLOW}Compiling $< into $@...${NC}"
	@mkdir -p $(@D)
	@$(CPP) $(FLAGS) -I$(INC) -c $< -o $@
	@echo "${GREEN}    $@ compiled successfully.${NC}"

$(NAME): $(OBJS)
	@echo "${YELLOW}Linking .o files to $(NAME)...${NC}"
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "${GREEN}    $(NAME) compiled successfully.${NC}"

clean:
	@echo "${PURPLE}Removing obj directory and .o files...${NC}"
	@rm -rf $(OBJ_DIR)
	@echo "${GREEN}   $(OBJ_DIR) and .o files successfully removed.${NC}"

fclean: clean
	@echo "${RED}Removing $(NAME)...${NC}"
	@rm -f $(NAME)
	@echo "${GREEN}   $(NAME) executable removed.${NC}"

re: fclean all
	@echo "${BLUE}Relinking $(NAME)...${NC}"
	@echo "${GREEN}   $(NAME) relinked.${NC}"

.PHONY: all clean fclean re
