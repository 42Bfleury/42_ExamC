/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/26 17:29:10 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 17:37:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		i;

	i = 0;
	list = begin_list;
	while (list->next)
	{
		list = list->next;
		i++;
	}
	return (i);
}
