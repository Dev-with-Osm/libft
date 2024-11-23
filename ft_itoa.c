/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:42:31 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/05 11:42:31 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*conv_int;
	int		len;
	long	num;

	len = get_int_len(n);
	num = n;
	conv_int = malloc(len + 1);
	if (!conv_int)
		return (NULL);
	conv_int[len] = '\0';
	if (num < 0)
	{
		conv_int[0] = '-';
		num = -num;
	}
	if (num == 0)
		conv_int[0] = '0';
	while (num)
	{
		len--;
		conv_int[len] = num % 10 + '0';
		num = num / 10;
	}
	return (conv_int);
}
