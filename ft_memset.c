/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:02:27 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/02 12:07:20 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cr;
	size_t			i;

	str = (unsigned char *)s;
	cr = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		str[i] = cr;
		i++;
	}
	return (s);
}
