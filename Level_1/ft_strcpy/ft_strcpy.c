/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 08:48:06 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/05 11:32:18 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(const char *str)
{
	const char	*i;

	i = str;
	while (*i)
		i++;
	return (i - str);
}

char		*ft_strncpy(char *dst, const char *src, int n)
{
	int		i;

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

char		*ft_strcpy(char *dst, const char *src)
{
	return (ft_strncpy(dst, src, (ft_strlen(src) + 1)));
}
