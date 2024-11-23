/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:37:18 by okhourss          #+#    #+#             */
/*   Updated: 2024/10/22 14:00:42 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		last_c;

	i = 0;
	last_c = -1;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			last_c = i;
		i++;
	}
	if (last_c != -1)
		return ((char *)s + last_c);
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
