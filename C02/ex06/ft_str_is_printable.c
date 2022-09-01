/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:54:44 by marinjim          #+#    #+#             */
/*   Updated: 2022/08/20 13:16:58 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	ascii1;
	char	ascii2;

	i = 0;
	ascii1 = 32;
	ascii2 = 126;
	while (str[i] != '\0')
	{
		if (str[i] >= ascii1 && str[i] <= ascii2)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int main(void)
// {
// 	char str[] = "vw11v";
// 	printf("%d ", ft_str_is_printable(str));
// }
