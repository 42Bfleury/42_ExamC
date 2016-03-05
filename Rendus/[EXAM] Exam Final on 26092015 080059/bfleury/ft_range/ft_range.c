/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/26 16:57:58 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 17:18:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_range(int start, int end)
{
	int result;

	result = end - start;
	if (end < 0)
		result = -result;
	result++;
	return (result);
}

int		*ft_range(int start, int end)
{
	int	*result;
	int	i;
	int j;
	int k;

	k = 0;
	j = start;
	i = get_range(start, end);
	result = (int*)malloc(sizeof(int) * i);
	while (k < i)
	{
		result[k] = j;
		j++;
		k++;
	}
	return (result);
}
