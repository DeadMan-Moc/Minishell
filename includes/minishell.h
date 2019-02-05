/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:14:49 by amokgohl          #+#    #+#             */
/*   Updated: 2019/02/01 08:26:32 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# define BUFF_SIZE 	4096

# include "../libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <sys/wait.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>
# include <dirent.h>

typedef struct		s_data
{
	char			**g_env;
}					t_data;

int					ft_newline(char **str, char **line, int fd, int ret_out);
int					ft_execute(char **args, t_data *p);
int					ft_cd(char **args, char **env);
int					ft_exit(char **args);
int					ft_delete(void);
int					ft_env(char **env);
int					ft_env_loop(char **env, t_data *p);
int					ft_run(char **args, char **envp);
int					ft_echo(char **argv, t_data *p);
void				clean_up(char **dir, char *n, char *tmp);
char				*ft_realloc(char *str);
int					ft_unsetenv(char **env, char *str);
char				*ft_path_finder(char **p, char **n);
void				ft_cleaner(char **dir, char *n, char *tmp);
char				*ft_path(char **p, char **n);
char				*get_env_var(char *variable, char **env);

int					get_next_line(int const fd, char **line);
void				ft_array(char *str, t_data *p);
void				ft_delarray(char **array);
char				**ft_arraydup(char **env);
int					ft_setenv(char *arg, t_data *p);
char				**ft_ustrnew(size_t size);
int					ft_ustrlen(char **s);
char				**ft_split(char *str);

#endif
