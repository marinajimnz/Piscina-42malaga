/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:47:58 by marinjim          #+#    #+#             */
/*   Updated: 2022/08/12 12:34:26 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = 48;
	while (x < 58)
	{
		write(1, &x, 1);
		x++;
	}
}