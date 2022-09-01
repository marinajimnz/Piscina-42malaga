/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:11:49 by marinjim          #+#    #+#             */
/*   Updated: 2022/08/24 18:19:48 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != '\0' && s1[i] == s2 [i])
			i++;
		else
			return (s1[i] - s2 [i]);
	}
	return (0);
}

// int	main(void)
// {
// 	int	i; 

// 	i = ft_strncmp("hola", "hona", 3);
// 	printf("%d", i);
// 	return (0);
// }
