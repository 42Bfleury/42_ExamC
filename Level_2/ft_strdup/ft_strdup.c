/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 23:11:15 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/05 08:14:32 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t		ft_strlen(const char *str)
{
	const char	*i;

	i = str;
	while (*i)
		i++;
	return (i - str);
}

void		*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char *tmp;

	tmp = (unsigned char *)ptr;
	while (len--)
		*tmp++ = (unsigned char)c;
	return (ptr);
}

void		*ft_memalloc(size_t size)
{
	void *ptr;

	if (!(ptr = (void *)malloc(size)))
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	if (n && dst != src)
	{
		i = 0;
		while (src[i] && i++ < n)
			dst[i - 1] = src[i - 1];
		while (i < n)
			dst[i++] = '\0';
	}
	return (dst);
}

char		*ft_strdup(const char *s)
{
	char	*str;

	if (!(str = ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	return (ft_strncpy(str, s, ft_strlen(s)));
}
