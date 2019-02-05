/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ustrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 20:56:00 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/23 01:57:06 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_ustrnew(size_t num)
{
	size_t	i;
	char	**str;

	i = 0;
	str = (char **)malloc(sizeof(char *) * (num + 1));
	if (!str)
		return (NULL);
	while (i < num)
	{
		str[i] = NULL;
		i += 1;
	}
	str[i] = NULL;
	return (str);
}
