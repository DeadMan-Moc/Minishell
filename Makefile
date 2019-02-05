# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 11:19:57 by amokgohl          #+#    #+#              #
#    Updated: 2019/02/01 08:25:35 by amokgohl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SOURCES = 	srcs/ft_exec.c\
		  	srcs/ft_path.c\
			srcs/get_next_line.c\
			srcs/ft_run.c\
		    srcs/main.c\
			srcs/ft_cd.c\
			srcs/ft_echo.c\
			srcs/ft_delete.c\
			srcs/ft_env.c\
			srcs/ft_array.c\
			srcs/ft_realloc.c\
			srcs/ft_setenv.c\
			srcs/ft_split.c\
		    srcs/ft_unsetenv.c\
			libft/ft_strsplit.c

HEADER = -I include

LFLAGS = -L./libft/ -lft

FLAGS = -o minishell -Wall -Werror -Wextra

all:
	@make -C libft/
	@gcc $(FLAGS) $(SOURCES) $(HEADER) $(LFLAGS)

clean:
	@rm $(NAME)
	@make -C libft/ clean

fclean: clean
		@rm -rf $(NAME)

re: fclean all
