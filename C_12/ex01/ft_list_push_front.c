/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:43:08 by kaye              #+#    #+#             */
/*   Updated: 2020/08/27 17:56:39 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*ft_create_elem()//void *data)
{
	t_list *begin;

	if (!(begin = malloc(sizeof(t_list))))
		return (NULL);
	begin->data = 42;
	begin->next = NULL;

	return (begin);
}

void ft_list_push_front(t_list **begin_list)
{
	t_list *new;
	t_list *tmp;

	new = ft_create_elem();
	tmp = *begin_list;
	new->next = tmp;
	*begin_list = new;
}

int main()
{
	t_list *list;
	int a;
	int b;
	list = malloc(sizeof(list) * 2);
	list->next = malloc(sizeof(list));
	list->next->next = malloc(sizeof(list));
	list->next->next->next = NULL;
	list->data = 1;
	list->next->data = 2;
	ft_list_push_front(&list);

	while (list != NULL)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
}
