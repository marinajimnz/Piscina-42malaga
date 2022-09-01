/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinjim <marinjim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:39:44 by marinjim          #+#    #+#             */
/*   Updated: 2022/08/25 16:35:55 by marinjim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;
	unsigned int	dest_l;
	unsigned int	src_l;

	i = 0;
	j = 0;
	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	count = dest_l;
	while (count < size && j < (src_l -1))
	{
		dest[i] = src[j];
		i++;
		j++;
		count++;
	}
	dest[i] = '\0';
	return (dest_l + src_l);
}

// int	main(void)
// {
// 	char	buffer[20] = "hola";
// 	char	buffer1[20] = "hola";
// 	unsigned int a = 3;

// 	printf("%lu\n", strlcat(buffer, "adios", 20));
// 	printf("%u\n", ft_strlcat(buffer1, "adios", 20));
// 	return (0);
// }
