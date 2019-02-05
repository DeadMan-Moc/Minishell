/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:13:35 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/27 09:27:04 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		ft_run(char **args, char **envp)
{
	pid_t		pid;
	int			status;
	char		*tmp;

	pid = fork();
	if (pid == 0)
	{
		tmp = ft_path(envp, args);
		execve(tmp, args, envp);
		ft_putstr("zft: command not found: ");
		ft_putstr("\x1b[91m");
		ft_putstr(args[0]);
		ft_putstr("\n");
		free(tmp);
		exit(0);
	}
	else
		waitpid(pid, &status, WUNTRACED);
	return (1);
}
