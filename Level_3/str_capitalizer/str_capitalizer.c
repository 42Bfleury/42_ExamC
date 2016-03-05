/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 03:59:14 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/05 08:44:17 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		if ((i == 1 || (str[i - 2] == ' ' || str[i - 2] == '\t'))
		&& (str[i - 1] >= 'a' && str[i - 2] <= 'z'))
			ft_putchar(str[i - 1] - 'a' + 'A');
		else if (i > 1 && (str[i - 2] != ' ' && str[i - 2] != '\t')
		&& ('A' <= str[i - 1] && str[i - 1] <= 'Z'))
			ft_putchar(str[i - 1] - 'A' + 'a');
		else
			ft_putchar(*(str - 1));
}

int		main(int ac, char *av[])
{
	int		i;

	i = 1;
	if (ac > 1)
		while (i++ < ac)
		{
			if ((i - 1) > 1)
				ft_putchar('\n');
			ft_strcapitalize(av[i - 1]);
		}
	ft_putchar('\n');
	return (0);
}
