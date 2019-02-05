/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 12:14:16 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/24 17:43:54 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		ft_unsetenv(char **env, char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	if (str == NULL)
	{
		ft_putstr("unsetenv: expected argument to unset.\n");
		return (1);
	}
	while (env[nbr])
		nbr++;
	while (env[i])
	{
		if (ft_strncmp(env[i], str, ft_strlen(str) - 1) == 0)
		{
			while (i < nbr - 1)
				env[i] = ft_realloc(env[i + 1]);
			i++;
			if (env[i] != NULL)
				env[i] = ft_realloc(NULL);
		}
		i++;
	}
	return (1);
}
