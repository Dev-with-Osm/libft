/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:50:05 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/03 10:50:05 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		beg;
	int		end;
	size_t	i;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	beg = 0;
	end = ft_strlen(s1);
	while (is_in_set(set, s1[beg]))
		beg++;
	while (end > beg && is_in_set(set, s1[end - 1]))
		end--;
	trimmed_str = malloc(end - beg + 1);
	if (!trimmed_str)
		return (NULL);
	while (beg < end)
	{
		trimmed_str[i] = s1[beg];
		i++;
		beg++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
