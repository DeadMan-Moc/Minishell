/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:10:27 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/24 15:44:30 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		ft_cd(char **argv, char **env)
{
	if (argv[1] == NULL || ft_strcmp("~", argv[1]) == 0)
	{
		if (chdir(get_env_var("HOME=", env)) != 0)
			ft_putstr("an error occured\n");
	}
	else
	{
		if (chdir(argv[1]) != 0)
		{
			ft_putstr("cd: no such file or directory: ");
			ft_putstr(argv[1]);
			ft_putstr("\n");
		}
	}
	return (1);
}
