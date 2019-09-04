/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:02:25 by slupe             #+#    #+#             */
/*   Updated: 2019/09/04 15:18:27 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *str)
{
	char	*copy;
	int		i;
	int		len;

	len = ft_strlen(str);
	i = 0;
	copy = (char *)malloc(sizeof(char) * len + 1);
	if (!copy)
		return (0);
	while (i <= len - 1)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
