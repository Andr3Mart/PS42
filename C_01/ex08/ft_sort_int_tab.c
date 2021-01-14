/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 08:22:12 by anmartin          #+#    #+#             */
/*   Updated: 2021/01/14 08:26:29 by anmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int index;

	index = 1;
	while (index < size)
	{
		while (tab[index - 1] > tab[index])
		{
			tmp = tab[index];
			tab[index] = tab[index - 1];
			tab[index - 1] = tmp;
			index = 1;
		}
		index++;
	}
}
