/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:31:32 by marinjim          #+#    #+#             */
/*   Updated: 2022/08/14 18:59:25 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	samepart(int x, char a, char b, char c);

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	height;

	height = 0;
	if (x > 0 && y > 0)
	{
		samepart(x, 'A', 'B', 'C');
		while (height < (y - 2))
		{
			samepart(x, 'B', ' ', 'B');
			height++;
		}
		if (y > 1)
		{
			samepart(x, 'A', 'B', 'C');
		}
	}
}

void	samepart(int x, char a, char b, char c)
{
	int	width;

	width = 0;
	while (width < x)
	{
		if (width == 0)
		{
			ft_putchar (a);
		}
		else if (width != 0 && width != (x - 1))
		{
			ft_putchar(b);
		}
		else if (width == (x - 1) && x != 1)
		{
			ft_putchar(c);
		}
		width++;
	}
	ft_putchar('\n');
}
