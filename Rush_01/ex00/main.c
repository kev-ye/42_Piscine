/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:18:09 by kaye              #+#    #+#             */
/*   Updated: 2020/08/16 19:40:22 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_check_argv(char *argv)
{
	int i;
	int len;

	len = 0;
	while (argv[len])
		len++;
	if (len != 31)
		return (0);
	i = 0;
	while (argv[i] && i <= 30)
	{
		if (!(argv[i] >= '1' && argv[i] <= '4'))
			return (0);
		i += 2;
	}
	i = 1;
	while (argv[i] && i <= 29)
	{
		if (argv[i] != ' ')
			return (0);
		i += 2;
	}
	return (1);
}

int		**malloc_tab(void)
{
	int **tab;

	tab = (int**)malloc(sizeof(int*) * 4);
	tab[0] = (int*)malloc(sizeof(int) * 4);
	tab[1] = (int*)malloc(sizeof(int) * 4);
	tab[2] = (int*)malloc(sizeof(int) * 4);
	tab[3] = (int*)malloc(sizeof(int) * 4);
	return (tab);
}

int		*ft_condition(char *argv)
{
	int *condition;
	int str;
	int stock_number;

	str = 0;
	stock_number = 0;
	condition = (int*)malloc(sizeof(int) * 16);
	if (condition == NULL)
		return (0);
	while (argv[str] && stock_number < 16)
	{
		if (argv[str] >= '1' && argv[str] <= '4')
		{
			condition[stock_number] = argv[str] - '0';
			stock_number++;
		}
		str++;
	}
	return (condition);
}

int		main(int argc, char **argv)
{
	int **tab;
	int *condition;

	tab = malloc_tab();
	if (tab == NULL)
		return (0);
	ft_init_tab(tab);
	if (argc == 2)
	{
		if (ft_check_argv(argv[1]))
		{
			condition = ft_condition(argv[1]);
			if (ft_is_valide(tab, 0, condition) == 1)
				ft_print_tab(tab);
			else
				ft_putstr("Error\n");
			free(condition);
		}
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	free(tab);
	return (0);
}
