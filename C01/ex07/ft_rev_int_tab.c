/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:27:15 by marinjim          #+#    #+#             */
/*   Updated: 2022/08/30 11:08:50 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	keep;
	int	i;

	i = 0;
	while (i != (size / 2))
	{
		keep = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = keep;
		i++;
	}
}
