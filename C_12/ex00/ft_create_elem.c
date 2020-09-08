/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 14:28:16 by kaye              #+#    #+#             */
/*   Updated: 2020/08/27 16:41:19 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *begin;
	
	if (!(begin = malloc(sizeof(t_list))))
		return (NULL);
	begin->data = data;
	begin->next = NULL;

	return (begin);
}
