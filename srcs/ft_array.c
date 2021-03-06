/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:13:22 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/24 17:23:21 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

char		**ft_arraydup(char **env)
{
	char	**dest;
	int		i;

	if (!(env))
		return (NULL);
	dest = NULL;
	i = 0;
	dest = ft_ustrnew(ft_ustrlen(env));
	while (env[i])
	{
		dest[i] = ft_strdup(env[i]);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}

void		ft_array(char *str, t_data *p)
{
	static int		count;
	char			**temp;

	count = 0;
	while (p->g_env[count])
		count++;
	temp = (char **)malloc(sizeof(char *) * (count + 2));
	count = 0;
	while (p->g_env[count])
	{
		temp[count] = ft_strdup(p->g_env[count]);
		count++;
	}
	temp[count] = ft_strdup(str);
	temp[count + 1] = NULL;
	ft_delarray(p->g_env);
	p->g_env = ft_arraydup(temp);
	ft_delarray(temp);
	count = 0;
}
