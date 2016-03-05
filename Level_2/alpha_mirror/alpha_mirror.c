/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 17:51:06 by exam              #+#    #+#             */
/*   Updated: 2015/09/18 19:44:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	letter;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			letter = argv[1][i];
			if (letter >= 'A' && letter <= 'Z')
				letter = 25 - (letter - 'A') + 'A';
			else if (letter >= 'a' && letter <= 'z')
				letter = 25 - (letter - 'a') + 'a';
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
