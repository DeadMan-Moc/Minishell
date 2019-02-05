/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:14:08 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/27 15:59:12 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		ft_setenv(char *arg, t_data *p)
{
	if (arg == NULL)
		ft_putstr("setenv: expected argument to set.\n");
	else
		ft_array(arg, p);
	return (1);
}
