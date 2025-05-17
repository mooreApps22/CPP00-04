# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoore <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/29 15:15:32 by smoore            #+#    #+#              #
#    Updated: 2025/04/01 18:29:08 by smoore           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# MAKEFILE VARIABLES:

# Executable Name
NAME = phonebook

# Directory with header files
INC = ./inc
HEADERS = $(INC)/Contact.hpp $(INC)/PhoneBook.hpp 

# Comiler and flags
CC = c++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98

#Terminal Colors
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
NC = \033[0m

#Source and Object Directories
SRC_DIR = ./src
OBJ_DIR = ./bin

# Source files
SRCS = $(SRC_DIR)/main.cpp \
	$(SRC_DIR)/PhoneBook.cpp \
	$(SRC_DIR)/Contact.cpp \
	$(SRC_DIR)/phonebook_routines.cpp \
	$(SRC_DIR)/string_utils.cpp \
	$(SRC_DIR)/prompt_utils.cpp 
#	$(SRC_DIR)/utils/utils2.cpp

# Object files corresponding to source files
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# MAKEFILE RULES:

# Default rule to build everything
all: $(OBJ_DIR) $(NAME)

# Creates object directory if not there
$(OBJ_DIR):
	@echo "${YELLOW}Creating object directory $(OBJ_DIR)...${NC}"
	@mkdir -p $(OBJ_DIR)
	@echo "${GREEN}  Object directory created.${NC}"

# Compiles each .cpp file into a .o file
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@echo "${YELLOW}Compiling $< into $@...${NC}"
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@
	@echo "${GREEN}  $@ compiled.${NC}"

# Link all object files into the final executable
$(NAME): $(OBJS)
	@echo "${YELLOW}Linking object files to $(NAME) executable...${NC}"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "${GREEN}  $(NAME) executable sucessfully created.${NC}"

# Remove all object files and directories
clean:
	@echo "${YELLOW}Removing object files...${NC}"
	@rm -rf $(OBJ_DIR)
	@echo "${GREEN}  Object files removed.${NC}"

# Remove object files and the final exectuable
fclean:
	@echo "${YELLOW}Removing object files and executable...${NC}"
	@rm -rf $(OBJ_DIR)
	@echo "${GREEN}  Object files removed.${NC}"
	@rm -f $(NAME)
	@echo "${GREEN}  $(NAME) executable removed.${NC}"

# Rebuild the project from scratch
re: fclean all

# Mark there targets as not associated with actual files
.PHONY: all clean fclean re
