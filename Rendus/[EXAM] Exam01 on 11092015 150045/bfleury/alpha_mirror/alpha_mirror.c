/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 18:58:07 by exam              #+#    #+#             */
/*   Updated: 2015/09/11 19:59:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if ('A' <= str[i] && str[i] <= 'M')
				c = ('N' + ('M' - str[i]));
			else if ('a' <= str[i] && str[i] <= 'm')
				c = ('n' + ('m' - str[i]));
			else if ('N' <= str[i] && str[i] <= 'Z')
				c = ('M' - (str[i] - 'N'));
			else if ('n' <= str[i] && str[i] <= 'z')
				c = ('m' - (str[i] - 'n'));
			else
				c = str[i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > i)
	{
		while (i < argc)
		{
			alpha_mirror(argv[i]);
			i++;
		}
	}
	return (0);
}
