# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 12:07:11 by anmendes          #+#    #+#              #
#    Updated: 2024/10/28 17:58:50 by anmendes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIÁVEIS
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror # -c. para não compilar arquivos .c
NAME	=	libft.a
SOURCES	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_strlcpy.c ft_strlcat.c ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c
OBJ     = $(SOURCES:.c=.o) # não precisa do prefixo do diretório

# COMANDOS
all: $(NAME) 

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

teste: main.o $(NAME)
	$(CC) $(CFLAGS) main.o -L. -lft -o teste_program

main.o: main.c
	$(CC) $(CFLAGS) -c main.c
