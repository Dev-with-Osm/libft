/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:14:27 by okhourss          #+#    #+#             */
/*   Updated: 2024/10/28 17:14:27 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dustr;
	size_t	i;

	i = 0;
	dustr = malloc(ft_strlen(s) + 1);
	if (!dustr)
		return (NULL);
	while (s[i])
	{
		dustr[i] = s[i];
		i++;
	}
	dustr[i] = '\0';
	return (dustr);
}
