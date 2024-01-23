# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joterret <joterret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 13:25:25 by joterret          #+#    #+#              #
#    Updated: 2024/01/22 13:38:50 by joterret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'exécutable
NAME = zombie

# Compilateur
CC = c++

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

# Règle par défaut
all: $(NAME)

# Règle pour construire l'exécutable
$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

# Règle pour nettoyer les fichiers compilés
clean:
	rm -f $(NAME)

# Règle pour recompiler le projet
re: clean all

# Règle pour éviter certains conflits de noms
.PHONY: all clean re