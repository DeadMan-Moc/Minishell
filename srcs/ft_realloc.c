/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:13:57 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/24 17:24:39 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

char	*ft_realloc(char *str)
{
	char	*s;

	if (str == NULL)
		return (NULL);
	s = (char *)malloc(sizeof(char) * ft_strlen(str));
	ft_strcpy(s, str);
	return (str);
}
