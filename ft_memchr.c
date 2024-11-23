/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:37:43 by okhourss          #+#    #+#             */
/*   Updated: 2024/10/25 14:00:34 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cr;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	cr = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == cr)
			return (str + i);
		i++;
	}
	return (NULL);
}
