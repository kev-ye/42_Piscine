/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 18:43:16 by kaye              #+#    #+#             */
/*   Updated: 2020/08/12 18:44:12 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i * i < nb && i <= nb / 2)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
