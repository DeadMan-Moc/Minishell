/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:32:55 by amokgohl          #+#    #+#             */
/*   Updated: 2018/06/14 14:30:02 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
	{
		i += 1;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
