/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 16:51:47 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/24 17:22:49 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void		ft_delarray(char **s)
{
	int i;

	i = 0;
	while (s[i] != NULL)
	{
		ft_strdel(&s[i]);
		i += 1;
	}
	free(s[i]);
}

int			main(int c, char **v, char **env)
{
	t_data	p;
	char	*line;
	char	**str;

	v = NULL;
	c = 1;
	ft_env_loop(env, &p);
	while (c)
	{
		ft_putstr("\033[0m\033[35me5r3p9 \033[0;36m$ >\033[0m");
		if (get_next_line(0, &line) < 0)
			ft_putstr("error");
		str = ft_split(line);
		ft_strdel(&line);
		c = ft_execute(str, &p);
		line = NULL;
		ft_delarray(str);
	}
	ft_delarray(p.g_env);
	return (0);
}
