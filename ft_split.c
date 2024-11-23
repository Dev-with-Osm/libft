/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:33:02 by ihalim            #+#    #+#             */
/*   Updated: 2024/11/13 15:59:37 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char sep)
{
	int	i;
	int	flg;
	int	count;

	i = 0;
	flg = 1;
	count = 0;
	while (s[i])
	{
		if (flg == 1 && s[i] != sep)
		{
			count++;
			flg = 0;
		}
		else if (s[i] == sep)
			flg = 1;
		i++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*free_arr(char **arr, int j)
{
	while (j >= 0)
	{
		free(arr[j]);
		j--;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	char	**words_array;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	words_array = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!words_array)
		return (NULL);
	while (j < ft_countwords(s, c))
	{
		while (s[i] == c)
			i++;
		len = word_len(s + i, c);
		words_array[j] = ft_substr(s + i, 0, len);
		if (!words_array[j])
			return (free_arr(words_array, j));
		i += len;
		j++;
	}
	words_array[j] = NULL;
	return (words_array);
}
